#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{

	int h;

	for (h = 97; h <= 122; h++)
	{

		if (h == 101 || h == 113)
			continue;

		printf("%c", h);

	}

	printf("\n");

	return (0);

}
