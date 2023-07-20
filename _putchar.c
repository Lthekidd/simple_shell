#include <unistd.h>
/**
 * _putchar - writes the character to standard output
 * @c: The character to output
 * Return: On success 1, -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

