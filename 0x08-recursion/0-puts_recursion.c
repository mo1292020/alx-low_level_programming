#include <stdio.h>

/**
 * _puts_recursion - Function that prints a string, followed by a new line
 *
 * @s: string parameter
 *
 * Return: nothing
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		printf("%c", *s);

		_puts_recursion(s + 1);
	}

	printf("\n");
}
