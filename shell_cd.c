#include <string.h>
#include "shell.h"
/**
 * shell_cd - executes th cd cmd
 * @cmd:pointer to string cd
 * @argc: num of args
 * @envp: environment vars
 * */
void shell_cd(char **cmd, int argc, char **envp __attribute__((unused)))
{

	/**to do*/
	if (_strcmp(cmd[0], "cd") == 0)
	{
		if (argc == 1)
			chdir(getenv("HOME"));
		chdir(cmd[1]);
	}
}
