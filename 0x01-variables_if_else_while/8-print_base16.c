#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{

	int h;

	for (h = 0; h < 16; h++)
	{

		if (h < 10)
			putchar(h + 48);

		else
			putchar(h + 87);

	}

	putchar('\n');


	return (0);

}
