#include <stdio.h>

/**
 * int _islower - function to check char case
 *
 * Return: Always 1 if c is lowercase and 0 if uppercase
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
