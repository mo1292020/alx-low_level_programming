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
	while (*s != '\0')
	{
		if (*s == c)
			return (*s);
		s++;
	}

	return ('\0');
}
