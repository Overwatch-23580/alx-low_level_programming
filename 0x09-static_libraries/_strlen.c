#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to get length of
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

