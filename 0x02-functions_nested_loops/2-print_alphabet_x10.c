#include "main.h"

/**
 * print alphabet 10 times
 *
 * Return: void
*/

void print_alphabet_x10(void)
{

	int h, d;

	for (h = 0; h < 10; h++)
	{
		for (d = 97; d < 123; d++)
			_putchar(d);

		_putchar('\n');

	}

}
