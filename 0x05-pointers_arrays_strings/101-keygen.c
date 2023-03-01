#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int  main(void)
{

	int arr[8], frr[8];
	char s[8];
	int n = 0, h;

	srand(time(0));

	for (h = 0; h < 8; h++)
		frr[h] = 0;

	for (h = 0; h < 8; h++)
	{
		while (frr[n] == 1)
			n = (rand() % (8 - 0) + 0);

		arr[h] = n;
		frr[n] = 1;
	}

	for (h = 0; h < 8; h++)
		frr[h] = 0;


	n = 0;


	for (h = 0; h < 5; h++)
	{
		while (frr[n] == 1)
			n = (rand() % (10 - 0) + 0);

		s[arr[h]] = n + 48;
		frr[n] = 1;
	}

	n = (rand() % (122 - 97) + 97);

	s[arr[5]] = n;

	n = (rand() % (90 - 65) + 65);

	s[arr[6]] = n;
	n = (rand() % (47 - 33) + 33);
	s[arr[7]] = n;

	for (h = 0; h < 8; h++)
		printf("%c", s[h]);

	return (0);
}
