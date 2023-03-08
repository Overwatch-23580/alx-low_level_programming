#include <stdio.h>
#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings can be considered
 * identical, otherwise returns 0.
 * @s1: first string to compare
 * @s2: second string to compare, can contain the special character *
 *
 * Return: 1 if strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
        if (*s1 == '\0' && *s2 == '\0')
                return (1);

        if (*s2 == '*') {
                if (*s1 == '\0')
                        return (wildcmp(s1, s2 + 1));
                else
                        return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
        }

        if (*s1 == *s2)
                return (wildcmp(s1 + 1, s2 + 1));

        return (0);
}

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
        char *s1 = "hello world";
        char *s2 = "hello*world";

        if (wildcmp(s1, s2))
                printf("Strings are identical\n");
        else
                printf("Strings are different\n");

        return (0);
}

