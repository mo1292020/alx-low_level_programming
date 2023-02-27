#include <stdio.h>

/**
 * _puts - Function to print string
 *
 * @str :string parameter
 *
 * Return: nothing (Success)
*/

void _puts(char *str)
{
	for (; *str != '\0'; ++str)
		putchar(*str + 0);
}
