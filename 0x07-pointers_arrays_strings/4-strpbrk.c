#include <stdio.h>

/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 *
 * @s: string parameter
 * @accept: string parameter
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int h = 0, d, f;

	while (s[h] != '\0')
	{
		d = 0;
		f = 0;
		while (accept[d] != '\0')
		{
			if (s[h] == accept[d])
			{
				f = 1;
				break;
			}
			d++;
		}

		if (f == 0)
			break;
		h++;
	}

	return (s + h);

}
