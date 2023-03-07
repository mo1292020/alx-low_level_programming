#include <stdio.h>

/**
 * _strchr  - Function that locate a character in a string
 *
 * @s :string parameter
 * @c :char parameter
 *
 * Return :a pointer to the first occurrence of the character c in the
 * string s, or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	int h;
	char *p;

	for (h = 0; s[h] != '\0' ; h++)
		if (s[h] == c)
		{
			p = &c;
			break;
		}

	return (p);
}
