#include <stdio.h>

/**
 * prime_or_not - function to check divisble until sqrt
 *
 * @n: int parameter
 * @h: int parameter
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int prime_or_not(int n, int h)
{
	if (h * h > n)
		return (1);
	else if (n % h == 0)
		return (0);
	else
		return (prime_or_not(n, h + 1));
}

/**
 * is_prime_number - Function that returns 1 if the input integer is a prime
 * number, otherwise return 0.
 *
 * @n: int parameter
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
*/

int is_prime_number(int n)
{

	if (n <= 2)
		return ((n == 2) ? 1 : 0);

	return (prime_or_not(n, 2));
}
