#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{

	int h, sum = 0;

	for (h = 0; h <= 1024; h++)
		if (h % 3 == 0 || h % 5 == 0)
			sum += h;
	printf("%i\n", sum);

	return (0);

}
