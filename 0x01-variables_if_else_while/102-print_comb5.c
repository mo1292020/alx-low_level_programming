#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int h, d, m, n;

	for (h = 0; h < 10; h++)
	{
		for (d = 0 ; d < 9; d++)
		{
			for (m = 0; m < 10; m++)
			{
				for (n = m + 1; n < 10; n++)
				{
					putchar(h + '0');
					putchar(d + '0');
					putchar(' ');
					putchar(m + '0');
					putchar(n + '0');

					if (h == 9 && d == 8 && m == 9 && n == 9)
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');


	return (0);

}
