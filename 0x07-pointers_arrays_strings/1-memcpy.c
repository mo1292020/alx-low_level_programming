#include <stdio.h>

/**
 * _memcpy - Function that copies memory area
 *
 * @dest :string parameter
 * @src :string parameter
 * @n : unsigned int parameter
 *
 * Return: a pointer  to the memory area dest (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
		dest[h] = src[h];

	return (dest);
}
