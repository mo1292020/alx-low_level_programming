#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long int h, x = 1, y = 2, sum = 0;

	printf("%lu, ", x);

	for (h = 1; h < 98; h++)
	{

		printf("%lu", y);

		y += x;
		x = y - x;

		if (h != 97)
			printf(", ");

	}

	printf("%lu\n", sum);


	return (0);

}
