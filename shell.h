#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>



/**main shell functions*/
char *shell_read(void);
char **shell_parse(char *input);
void shell_execute(char **cmd, int argc, char **argv, char **envp);



#endif /* _SHELL*/
