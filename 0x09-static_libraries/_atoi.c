#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to string to convert
 *
 * Return: integer value of string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;

	while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign = -1;

		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}

	return (num * sign);
}

