#include <stdio.h>

/**
 * _strncat - Function to append n character from src to dest string
 *
 * @dest :string parameter
 * @src :string parameter
 * @n : int parameter
 *
 * Return: dest after append n character from src to it (Success)
*/

char *_strncat(char *dest, char *src, int n)
{
	int h, d;

	for (h = 0; dest[h] != '\0'; h++)
		;

	for (d = 0; src[d] != '\0' && d < n; d++, h++)
		dest[h] = src[d];

	dest[h] = '\0';

	return (dest);
}
