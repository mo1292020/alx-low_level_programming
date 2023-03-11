#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - function to check string is number or not
 *
 * @number: string parameter
 *
 * Return: 1 if it is number and 0 if not
 */

int isNum(char number[])
{
	while (*number != '\0')
	{
		if (*number < 48 || *number > 57)
			return (0);
		number++;
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

	int h, res = 0;

	for (h = 2; h <= argc; h++)
	{
		if (!isNum(argv[h - 1]))
		{

			printf("Error\n");

			return (1);

		}

		res += atoi(argv[h - 1]);
	}

	printf("%d\n", res);

	return (0);
}
