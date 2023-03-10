#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define UNUSED(x) (void)(x)

/**
 * StringCheck - checks if a string is a valid number
 * @s: string to check
 *
 * Return: 1 if string is a valid number, 0 otherwise
 */
int StringCheck(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (!isdigit(s[i]))
        {
            return (0);
        }
    }

    return (1);
}

/**
 * main - main function
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int i;
    int result = 0;

    if (argc > 1)
    {
        for (i = 1; i < argc; i++)
        {
            if (StringCheck(argv[i]))
            {
                result += atoi(argv[i]);
            }
            else
            {
                printf("Error\n");
                return (1);
            }
        }

        printf("%d\n", result);
        return (0);
    }
    else
    {
        printf("%d\n", 0);
        return (1);
    }
}

