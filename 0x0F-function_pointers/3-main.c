#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Program Entry that takes 4 arguments where 2 are
 * int variables plus an operator to perform
 * a function between the two numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0-on success
*/
int main(int argc, char *argv[])
{
	int n1, n2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == 47 || *op == 37) && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(n1, n2));

	return (0);

}
