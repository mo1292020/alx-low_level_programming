#include <stdio.h>
#include <malloc.h>

/**
 * create_array - Function that creates an array of chars,
 *  and initializes it with a specific char.
 *
 * @size :unsigned int parameter
 * @c :char parameter
 *
 * Return:  a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int h;

	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (h = 0; h < size; h++)
		p[h] = c;

	return (p);



}
