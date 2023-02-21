#include "main.h"

/**
 * print_last_digit - function to print last digit of an integer
 *
 *@n : check input of function
 *
 * Return: Always return last digit of 'n'
*/

int print_last_digit(int n)
{
	int h;

	h = n % 10;

	_putchar(h + '0');

	return (h);
}
