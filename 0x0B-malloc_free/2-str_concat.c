#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Function that concatenates two strings.
 *
 * @s1 :string parameter
 * @s2 :string parameter
 *
 * Return: pointer should point to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2, and null
 * terminated, if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
*/

char *str_concat(char *s1, char *s2)
{

	char *p;
	unsigned int size, h = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	size = strlen(s1) + strlen(s2);

	p = malloc(sizeof(char) * (size + 1));

	if (p == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		p[h++] = *s1;
		s1++;
	}

	while (*s2 != '\0')
	{
		p[h++] = *s2;
		s2++;
	}

	return (p);



}
