
#include "shell.h"
#include <stdlib.h>
#include <string.h>
/**
 * find_cmd - checks to see if cmd is an executable 
 * @cmd: command
 * @argv: vector array
 * Return: 1 if executable present
 */
int find_cmd(char *cmd, char **argv)
{
 	char *path = getenv("PATH");
	int is_found = 0;
	char *dir;
	char *full_path;

	if (path == NULL)
	{
		perror(argv[0]);
		return -1;
	}

	while (path != NULL)
	{
		dir = strtok(path, ":");
 		full_path = malloc(strlen(dir) + strlen(cmd) + 2);
		strcpy(full_path, dir);
		strcat(full_path, "/");
		strcat(full_path, cmd);
	
		if (access(full_path, X_OK) == 0)
			is_found = 1;
		free(full_path);
        	path = strtok(NULL, ":");
	}
	return is_found;
}
