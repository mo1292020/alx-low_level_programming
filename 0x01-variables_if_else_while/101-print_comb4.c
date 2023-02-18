#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int h, d, m;

	for (h = 0; h < 10; h++)
	{
		for (d = h + 1; d < 9; d++)
		{
			for (m = d + 1; m < 10; m++)
			{
				putchar(h + '0');
				putchar(d + '0');
				putchar(m + '0');

				if (h == 7 && d == 8 && m == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}


	putchar('\n');

	return (0);

}
