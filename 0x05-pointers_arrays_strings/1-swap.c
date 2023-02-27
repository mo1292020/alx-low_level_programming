#include <stdio.h>

/**
 * swap_int - Function to swap value of two integer
 *
 * @a :int parameter
 * @b :int parameter
 *
 * Return: Nothing (Success)
*/

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}
