#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Function that concatenates two strings.
 *
 * @s1 :string parameter.
 * @s2 :string parameter.
 * @n :unsigned int parameter.
 *
 * Return: a pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int h, d, sz1, sz2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	sz1 = strlen(s1);
	sz2 = strlen(s2);

	if (n > sz2)
		n = sz2;

	p = malloc(sz1 + n + 1);

	if (p == NULL)
		return (NULL);


	for (h = 0; s1[h] != '\0'; h++)
		p[h] = s1[h];
	for (d = 0; s2[d] != '\0' && d < n; d++)
		p[h + d] = s2[d];

	p[h + d] = '\0';

	return (p);
}
