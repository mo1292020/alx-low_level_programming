#include <stdio.h>

/**
 * _strpbrk - Function  that locates a substring
 *
 * @haystack: string parameter
 * @needle: string parameter
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *n, *m;

	while (*haystack != '\0')
	{
		n = haystack;
		m = needle;
		while (*m != '\0' && *haystack == *m)
		{
			m++;
			haystack++;
		}
		if (!*m)
			return (m);
		haystack++;
	}

	return ('\0');

}
