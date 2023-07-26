#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
/**
* getfunction - Struct to represent a function pointer
*for our built-in functions
*/
typedef struct getfunction
{
        char *name;
        void (*getfunction)(char **cmd, int argc, char **envp);
} getfunction;

/**main shell functions*/
char *shell_read(void);
char **shell_parse(char *input);
void shell_execute(char **cmd, int argc, char **argv, char **envp);
/** string functions - add more once needed */
/**int _strlen(const char *s);
char *_strcpy(char *dest, const char *src);
int _strcmp(char *s1, char *s2);**/
int find_cmd(char *cmd, char **argv);

/**our own implementation of std library functions*/
int _putchar(char c);
/**int _strcmp(const char *string1, const char *string2);**/
void mputs(const char *to_ouput);

/**Shell builtin functions*/
void shell_exit(char **cmd, int argc, char **envp);
void shell_cd(char **cmd, int argc, char **envp);
void shell_env(char **cmd, int argc, char **envp);
#endif /* _SHELL*/
