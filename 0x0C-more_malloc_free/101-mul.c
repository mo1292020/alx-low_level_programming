#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * isNum - function to check string is number or not
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
 * multiply - initialize array with 0 byte
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: nothing
*/

void multiply(char *s1, char *s2)
{
	int i, l1, l2, total_l, f_digit, s_digit, res = 0, tmp;
	char *ptr;
	void *temp;

	l1 = strlen(s1);
	l2 = strlen(s2);
	tmp = l2;
	total_l = l1 + l2;
	ptr = calloc(sizeof(int), total_l);

	/* store our pointer address to free later */
	temp = ptr;

	for (l1--; l1 >= 0; l1--)
	{
		f_digit = s1[l1] - '0';
		res = 0;
		l2 = tmp;
		for (l2--; l2 >= 0; l2--)
		{
			s_digit = s2[l2] - '0';
			res += ptr[l2 + l1 + 1] + (f_digit * s_digit);
			ptr[l1 + l2 + 1] = res % 10;
			res /= 10;
		}
		if (res)
			ptr[l1 + l2 + 1] = res % 10;
	}

	while (*ptr == 0)
	{
		ptr++;
		total_l--;
	}

	for (i = 0; i < total_l; i++)
		printf("%i", ptr[i]);
	printf("\n");
	free(temp);
}

/**
 * main - check the code for ALX School students.
 *
 * @argc :int parameter.
 * @argv :string parameter
 *
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	if (argc != 3 || !isNum(argv[1]) || !isNum(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	if (*argv[1] == '0' || *argv[2] == '0')
		printf("0\n");
	else
		multiply(argv[1], argv[2]);

	return (0);
}
