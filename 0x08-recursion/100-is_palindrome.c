#include <stdio.h>
#include <string.h>

/**
 * check_palindrome - Function that returns 1 if string is
 * palindrome and 0 if not
 *
 * @s: string parameter
 * @st: int parameter
 * @size: int parameter
 *
 * Return: 1 if the input string is palindrome and 0 if not.
*/

int check_palindrome(char *s, int st, int size)
{

	if (st == (int)size / 2)
		return (1);
	else if (s[st] == s[size - (st + 1)])
		return (1);
	else if (s[st] != s[size - (st + 1)])
		return (0);
	return (check_palindrome(s, st + 1, size));
}


/**
 * is_palindrome - function that return 1 if a string is
 *  a palindrome and 0 if not.
 *
 * @s: string parameter
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int size;

	size = strlen(s);
	return (check_palindrome(s, 0, size));
}
