#include <stdio.h>

/**
 * _strlen - Function to print string
 *
 * @str :string parameter
 *
 * Return: nothing (Success)
*/

void _puts(char *str)
{
	for (; *str != '\0'; ++str)
		putchar(*str);
}
