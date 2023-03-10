#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *start, *substr;

	while (*haystack != '\0')
	{
		start = haystack;
		substr = needle;

		while (*substr == *haystack && *substr != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			substr++;
		}

		if (*substr == '\0')
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}

