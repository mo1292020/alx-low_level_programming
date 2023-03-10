#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - function to check string is number or not
 *
 * @number: string parameter
 *
 * Return: 1 if it is number and 0 if not
 */

int is_number(char *number)
{
	while (*number != '\0')
	{
		if (*number < 48 || *number > 57)
			return (0);
	}
	return (1);
}

/**
 * main - Entry point
 *
 * @argc: int parameter
 * @argv: string parameter
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	if (argc < 3)
		printf("0\n");

	else if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		int res;

		res = atoi(argv[1]) + atoi(argv[2]);

		printf("%d\n", res);
	}

	return (0);
}
