#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int h;

	for (h = 0; h < 10; h++)
		putchar(h + '0');

	putchar('\n');

	return (0);
}
