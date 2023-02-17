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
	{

		putchar(h);

		if (h != 9)
		{
			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');


	return (0);

}
