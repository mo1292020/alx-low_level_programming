#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory using malloc.
 *
 * @b :unsigned int parameter
 *
 * Return: a pointer to the allocated memory
 * exit a status value of 98 if fail
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
