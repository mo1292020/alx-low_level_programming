#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long int h, x = 1, y = 2;

	printf("%lu, ", x);

	for (h = 0; h < 50; h++)
	{

		printf("%lu", y);

		y += x;
		x = y - x;

		if (h != 50)
			printf(", ");

	}

	printf("\n");


	return (0);

}
