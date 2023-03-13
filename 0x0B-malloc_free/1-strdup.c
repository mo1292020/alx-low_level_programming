#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Function that returns a pointer to a newly allocated space in
 *  memory, which contains a copy of the string given as a parameter.
 *
 * @str :string parameter
 *
 * Return:  a pointer to the duplicated string. It returns NULL
 * if insufficient memory was available
*/

char *_strdup(char *str)
{

	char *p;
	unsigned int size, h = 0;

	size = strlen(str);

	p = malloc(sizeof(char) * (size + 1));

	if (p == NULL)
		return (NULL);

	while (*str != '\0')
	{
		p[h++] = *str;
		str++;
	}

	return (p);



}
