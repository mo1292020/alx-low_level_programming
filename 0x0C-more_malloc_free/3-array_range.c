#include "main.h"

/**
 * _realloc - Function that reallocates a memory block using malloc and free
 *
 * @ptr :void pointer to the memory previously allocated
 * with a call to malloc.
 * @old_size :unsigned int parameter, the size, in bytes,
 * of the allocated space for ptr.
 * @new_size :unsigned int parameter, the new size,
 * in bytes of the new memory block.
 *
 * Return: ptr after allocate.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int h;
	int *p, *t;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		free(ptr);
		return (p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	t = ptr;

	for (h = 0; h < old_size; h++)
		p[h] = t[h];

	free(ptr);

	return (p);
}
