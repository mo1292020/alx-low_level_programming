#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point  that prints the minimum number of
 * coins to make change for an amount of money.
 *
 * @argc: int parameter
 * @argv: string parameter
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int h, num, x, res = 0, arr[5] = {25, 10, 5, 2, 1};

	num = atoi(argv[1]);

	for (h = 0; h < 5; h++)
	{
		if (num >= arr[h])
		{
			x = (int)(num / arr[h]);
			res += x;
			num -= (arr[h] * x);
			h--;
		}
	}

	printf("%d\n", res);

	return (0);
}
