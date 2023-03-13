#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - Function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @width :int parameter
 * @height :int parameter
 * Return:   NULL on failure
 * If width or height is 0 or negative, return NULL
*/

int **alloc_grid(int width, int height)
{

	int  **p;
	int  h, d;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		p[h] = malloc(sizeof(int) * width);

		if (p[h] == NULL)
		{
			while (h >= 0)
				free(p[h--]);
			free(p);
			return (NULL);
		}
		for (d = 0; d < width; d++)
		{
			p[h][d] = 0;
		}
	}


	return (p);



}
