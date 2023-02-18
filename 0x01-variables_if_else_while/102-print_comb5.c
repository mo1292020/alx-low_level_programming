#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int h, d;

	for (h = 0; h < 99; h++)
	{
		for (d = h ; d < 100; d++)
		{
			if (h == d)
				continue;
			putchar(h / 10 + '0');
			putchar(h % 10 + '0');
			putchar(' ');
			putchar(d / 10 + '0');
			putchar(d / 10 + '0');
			if (h == 98 && d == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');


	return (0);

}
