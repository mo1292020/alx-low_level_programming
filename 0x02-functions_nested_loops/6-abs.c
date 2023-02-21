#include "main.h"

/**
 * _abs - function to print absolute value of an integer
 *
 *@n : check input of function
 *
 * Return: Always return absolute value of 'n'
*/

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
