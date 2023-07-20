#include <stdio.h>
#include "shell.h"
/**
*shell_read - gets user input
*Returns: user input
*/

char *shell_read(void)
{
    char *input = NULL;
    size_t buf = 0;

    /*getline handles memory allocations on its own*/
    if (getline(&input,&buf,stdin) == -1)
    {
        /**avoid memory leaks if getline fails*/
        free(input);
        exit(EXIT_FAILURE);
    }
    else
    {
        /**Test for end of file*/
        if (feof(stdin))
        {
            free(input);
            exit(EXIT_FAILURE);
        }
    }
    return input;
}

