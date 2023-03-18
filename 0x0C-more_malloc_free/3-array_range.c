#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers.
 *
 * @min :int parameter.
 * @max :int parameter.
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
*/

int *array_range(int min, int max)
{
	int h, d, size;
	int *p;

	size = (max - min) + 1;

	if (min > max)
		return (NULL);

	p = malloc(size * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (h = min, d = 0; h <= max; h++, d++)
		p[d] = h;

	return (p);
}
