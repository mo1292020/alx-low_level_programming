#include "main.h"

/**
 * rev_string - Function to reverse string
 *
 * @s :string parameter
 *
 * Return: nothing (Success)
*/

void rev_string(char *s)
{
	int size, h;
	char t[10000];

	for (size = 0; s[size] != '\0'; size++)
		t[size] = s[size];

	for (h = 0; h < size; h++)
		s[h] = t[size - (h + 1)];

}
