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
		for (d = 0 ; d < 10; d++)
		{
			for (m = h; m < 10; m++)
			{
				for (n = d; n < 10; n++)
				{
					if (h == m && d == n)
						continue;

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
