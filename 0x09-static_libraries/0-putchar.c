#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[10] = "_putchar";
	int h;

	for (h = 0; h < 8; h++)
		_putchar(str[h]);

	_putchar('\n');

	return (0);

}
