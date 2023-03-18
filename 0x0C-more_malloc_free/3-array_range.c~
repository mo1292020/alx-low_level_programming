#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Function that  function allocates memory for an array of nmemb
 * elements of size bytes each and returns a pointer to the allocated memory.
 *
 * @nmemb :unsigned int parameter.
 * @size :unsigned parameter.
 *
 * Return:  a pointer to the allocated memory
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int h;
	char *p;


	if (nmemb * size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (h = 0; h < nmemb * size; h++)
		p[h] = 0;

	return (p);
}
