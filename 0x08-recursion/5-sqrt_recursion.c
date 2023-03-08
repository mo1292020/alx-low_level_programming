#include <stdio.h>

/**
 * _sqrt_recursion_2 - Function that return the natural square root of a number
 *
 * @n: int parameter
 * @res: int parameter
 *
 * Return: If n does not have a natural square root,
 * the function should return -1
*/

int _sqrt_recursion_2(int n, int res)
{
	if (res > n / 2)
		return (-1);
	else if (res * res == n)
		return (res);
	else
		return (_sqrt_recursion_2(n, res + 1));
}


/**
 * _sqrt_recursion - Function that return the natural square root of a number.
 *
 * @n: int parameter
 *
 * Return: If n does not have a natural square root,
 * the function should return -1
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_2(n, 0));
}
