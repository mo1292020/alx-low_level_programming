#include <stdio.h>

/**
 * _strncpy - Function that copy string
 *
 * @dest :string parameter
 * @src :string parameter
 * @n : int parameter
 *
 * Return: dest after copy src to it (Success)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int h;

	for (h = 0; src[h] != '\0' && h < n; h++)
		dest[h] = src[h];

	while (h < n)
		dest[h++] = '\0';

	return (dest);
}
