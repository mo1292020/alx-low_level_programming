#include <stdio.h>

/**
 * _strspn - Function gets the length of a prefix substring
 *
 * @s: string parameter
 * @accept: string parameter
 *
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int h = 0, d, f;

	while (s[h] != '\0')
	{
		f = 0;
		d = 0;
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

	return (h);

}
