#include <string.h>
#include "shell.h"
/**
 * _strtok- tokenise string
 * @string: string to tokenise
 * @delim: the delimeters
 * @Return: token
 */
char* _strtok(char *string, const char *delim)
{
	static char *last_token;
	char *token = NULL;

	if (string != NULL)
		last_token = string;
	else if (last_token == NULL)
		return (NULL);
	token = last_token;
	while (*token != '\0' && strchr(delim, *token) == NULL)
		token++;
	if (*token == '\0')
	{
		last_token = NULL;
		return (NULL);
	}
	else
	{
		*token = '\0';
		last_token = token + 1;
		return (last_token - _strlen(token));
	}
}
