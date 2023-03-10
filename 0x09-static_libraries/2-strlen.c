#include <stdio.h>

/**
 * _strlen - Function to return length of string
 *
 * @s :int parameter
 *
 * Return: length of s (Success)
*/

int _strlen(char *s)
{
	int size;

	for (size = 0; *s != '\0'; ++s)
		size++;

	return (size);
}
