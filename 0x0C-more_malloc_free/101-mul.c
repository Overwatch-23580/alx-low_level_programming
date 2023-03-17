#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isdigit - Checks if a character is a digit
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
    int len = 0;

    while (*s++)
        len++;

    return (len);
}

/**
 * print_error - Prints an error message and exits with a failure status
 */
void print_error(void)
{
    printf("Error\n");
    exit(98);
}

/**
 * main - Entry point. Multiplies two positive numbers.
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
    int i, j, k, len1, len2, len_result;
    char *result;

    if (argc != 3)
        print_error();

    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j]; j++)
        {
            if (!_isdigit(argv[i][j]))
                print_error();
        }
    }

    len1 = _strlen(argv[1]);
    len2 = _strlen(argv[2]);
    len_result = len1 + len2;
    result = calloc(len_result, sizeof(char));

    if (!result)
        return (1);

    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            k = i + j + 1;
            result[k] += (argv[1][i] - '0') * (argv[2][j] - '0');
            result[k - 1] += result[k] / 10;
            result[k] %= 10;
        }
    }

    for (i = (*result == 0); i < len_result; i++)
        putchar(result[i] + '0');

    putchar('\n');

    free(result);
    return (0);
}

