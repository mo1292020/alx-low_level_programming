#include <stdio.h>

/**
 * _strcat - Function to append two string
 *
 * @dest :string parameter
 * @src :string parameter
 *
 * Return: dest after append src to it (Success)
*/

char *_strcat(char *dest, char *src)
{
	int h, d;

	for (h = 0; dest[h] != '\0'; h++)
		;

	for (h --, d = 0; src[d] != '\0'; d++, h++)
		dest[h] = src[d];

	dest[h] = '\0';

	return (dest);
}
