#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * parst_int - function to convert string to int
 *
 * @number: string parameter
 *
 * Return: number in int tybe
 */

int parse_int(char *number)
{
	int res = 0;

	while (*number != '\0')
	{
		res *= 10;
		res += (*number - 48);
		number++;
	}
	return (res);
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
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		int x, y, res;

		x = parse_int(argv[1]);
		y = parse_int(argv[2]);

		res = x * y;

		printf("%d\n", res);

		return (0);
	}
}
