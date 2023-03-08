#include <stdio.h>
/**
 * _pow_recursion - Function that returns the value
 *  of x raised to the power of y.
 *
 * @x: int parameter
 * @y: int parameter
 *
 * Return: If y is lower than 0, the function should return -1
*/

int _pow_recursion(int x, int y)
{
	int e;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y % 2 == 0)
	{
		e = _pow_recursion(x, y / 2);
		return (e * e);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
