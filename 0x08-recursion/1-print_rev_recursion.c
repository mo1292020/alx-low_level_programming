#include <stdio.h>

/**
 * _puts_recursion - Function that prints a string in reverse
 *
 * @s: string parameter
 *
 * Return: nothing
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);

		printf("%c", *s);
	}
	else
		printf("\n");
}
