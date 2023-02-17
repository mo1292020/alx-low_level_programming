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
		printf("%c", h);

	for (h = 65; h <= 90; h++)
		printf("%c", h);

	printf("\n");

	return (0);
}
