#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: the character to locate
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);

	return (NULL);
}

