#include <stdlib.h>
#include <string.h>
#include "main.h"

char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
    {
        return NULL;
    }

    int i, j, k, len = strlen(str);
    char **words = malloc(sizeof(char *) * (len / 2 + 1));
    if (words == NULL)
    {
        return NULL;
    }

    for (i = 0, j = 0; i < len; ++i)
    {
        if (str[i] != ' ')
        {
            k = i;
            while (k < len && str[k] != ' ')
            {
                ++k;
            }
            words[j] = malloc(sizeof(char) * (k - i + 1));
            if (words[j] == NULL)
            {
                while (--j >= 0)
                {
                    free(words[j]);
                }
                free(words);
                return NULL;
            }
            strncpy(words[j], str + i, k - i);
            words[j][k - i] = '\0';
            ++j;
            i = k;
        }
    }
    words[j] = NULL;

    return words;
}

