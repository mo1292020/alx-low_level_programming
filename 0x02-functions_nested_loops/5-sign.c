#include "main.h"

/**
 * print_sign - function to check input if greather or less than or equal
 * to zero
 *
 * @n : to check input for function
 *
 * Return: 1 if greather than 0 and -1 if less than zero and zero if equal
*/


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);

}
