#include "main.h"

/**
 * _isalpha - function to check if input is lowercase or uppercase character
 *
 *@c: check input of function
 *
 * Return: 1 if 'c' is character and 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
