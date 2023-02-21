#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
*/

void print_alphabet(void)
{
	int h;

	for (h = 97; h < 123; h++)
		_putchar(h);

	_putchar('\n');
}
