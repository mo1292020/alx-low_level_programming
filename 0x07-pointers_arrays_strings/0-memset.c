#include <stdio.h>

/**
 * _memset - Function that fill memory with a constant byte
 *
 * @s :string parameter
 * @b :char parameter
 * @n : int parameter
 *
 * Return: a pointer  to the memory area s (Success)
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
		s[h] = b;

	return (s);
}
