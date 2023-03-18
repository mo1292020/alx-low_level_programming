#include <stdlib.h>
#include <string.h>

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
	int h, d = 0, size;
	int *p;

	size = (max - min) + 1;

	if (min > max)
		return (NULL);

	p = malloc(size);

	if (p == NULL)
		return (NULL);

	for (h = min; h <= max; h++)
		p[d++] = h;

	return (p);
}
