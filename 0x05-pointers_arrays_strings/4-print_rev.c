#include "main.h"

/**
 * print_rev - Function to print string
 *
 * @s :string parameter
 *
 * Return: nothing (Success)
*/

void print_rev(char *s)
{
	int size, h;

	for (size = 0; *s != '\0'; s++, size++)
		;

	for (h = 0; h < size; h++)
		_putchar(s[h]);


	_putchar('\n');
}
