#include <stdio.h>

/**
 * print_diagsums - Function that prints the sum of the two
 * diagonals of a square matrix of integers.
 *
 * @a: input pointer
 * @size: int parameter
 *
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int h,  res1 = 0, res2 = 0;

	for (h = 0; h < size * size; h++)
	{
		if (h % (size + 1) == 0)
			res1 += a[h];
		if (h % (size - 1) == 0 && h != 0 && h < size * size - 1)
			res2 += a[h];
	}
	printf("%d, %d\n", res1, res2);

}
