#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int h;
	int d;

	for (h = 0; h < 9; h++)
	{
		for (d = h + 1; d < 10; d++)
		{

			putchar(h + '0');
			putchar(d + '0');

			if (h != 8 && d != 9)
			{
				putchar(',');
				putchar(' ');
			}

		}
	}

	putchar('\n');


	return (0);

}
