#include "main.h"
/**
 * _atoi : Function to convert strint number to integr
 *
 * @s: input number as a parameter
 *
 * Return: s as an integer
*/

int _atoi(char *s)
{
	int h, res = 0, flag = 0;

	for (h = 0; s[h] != '\0'; h++)
	{
		if (s[h] >= 48 && s[h] <= 57)
		{
			if (h > 0)
				if (s[h - 1] == '-')
					flag = 1;
			while (s[h] >= 48 && s[h] <= 57 && s[h] != '\0')
			{
				res *= 10;
				res += (s[h] - 48);
				h++;
			}
			break;
		}
	}

	return ((flag == 0) ? (res) : (res * -1));
}
