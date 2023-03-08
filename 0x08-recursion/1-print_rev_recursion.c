#include <stdio.h>

/**
 * _print_rev_recursion - Function that prints a string in reverse
 *
 * @s: string parameter
 *
 * Return: nothing
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);

		printf("%c", *s);
	}
	else
		printf("\n");
}
