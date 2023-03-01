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
	int h, res = 0, flag = 1;

	for (h = 0; s[h] != '\0'; h++)
	{
		if (s[h] == '-')
			flag *= -1;

		if (s[h] >= 48 && s[h] <= 57)
		{
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
