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

/** string functions - add more once needed */
int _strlen(const char *s);
char *_strcpy(char *dest, const char *src);
int _strcmp(char *s1, char *s2);



#endif /* _SHELL*/
