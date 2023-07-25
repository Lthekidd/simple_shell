#include "shell.h"
/**
* main - runs the main loop of the shell
* @arc: number of arguments passed
* @argv: arguments passed
* @envp: enviroment variables
* Return: Always 0
*/
int main(int argc,char **argv, char **envp)
{
    char *input;
    char **string_tokens;
    if (isatty(STDIN_FILENO) == 1)
    {
        /**interactive shell*/
        while (1)
        {
            mputs("$ ");
            input = shell_read();
            if (input == NULL)
	    {
		 free(input);
		 perror("No command received");
	    }
            string_tokens = shell_parse(input);
            if (string_tokens == NULL)
	    {
		    free(string_tokens);
		    perror("Parse error");
	    }
            shell_execute(string_tokens, argc, argv, envp);
        }     
    }
    else
    {
	    /**non-interactive shell*/
	    input = argv[1];
	    string_tokens = shell_parse(input);
	    shell_execute(string_tokens, argc, argv, envp);
    }
    free(input);
    free(string_tokens);
    return 0;
}

