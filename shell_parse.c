#include <stdlib.h>
#include <string.h>
#include "shell.h"
/**
*shell_parse - get input and break it down to commands and arguments
*@input: input to tokenise
*Return: pointer of arrays with string tokens
*/
char **shell_parse(char *input)
{
	char *delim = " \t\r\n";
	char *token;
	int len = 0;
	int size = 30;/*Initial size for input*/
	char **tokens = malloc(size * sizeof(char *));

	if (!tokens)
	{
		perror("An error occured");
		exit(EXIT_FAILURE);
	}

	/*check to see if input is not null*/
	if (input != NULL)
		token = strtok(input, delim);


	while (token != NULL)
	{
		tokens[len] = token;
		len++;

		if (len >= size)/*not enough memory*/
		{
			/*allocate more memory*/
			tokens = _realloc(tokens, 0, len * sizeof(char *));
				len++;
			if (!tokens)
			{
				perror("An error occured");
				exit(EXIT_FAILURE);
			}
		}
		/*Continue to next token*/
		token = strtok(NULL, delim);
	}
	tokens[len] = NULL;
	return (tokens);
}

