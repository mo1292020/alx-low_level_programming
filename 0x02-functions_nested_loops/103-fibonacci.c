#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long int x = 1, y = 2, sum = 0;


	while (y < 4000000)
	{

		if (y % 2 == 0)
			sum += y;

		y += x;
		x = y - x;

	}

	printf("%lu\n", sum);


	return (0);

}
