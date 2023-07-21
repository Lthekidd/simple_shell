#include "shell.h"

char *_strcpy(char *dest, const char *src);
int _strlen(const char *s);
int _strcmp(char *s1, char *s2);

/**
 * _strcpy - Copies the string.
 * @dest: pointer to the destination
 * @src: Pointer to the source string.
 *
 * Return: Pointer to destination
 */
char *_strcpy(char *dest, const char *src)
{
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - Returns the length of the string.
 * @s: A pointer to the characters string.
 *
 * Return: An int of length of the character string.
 */
int _strlen(const char *s)
{
	int length = 0;

	if (!s)
		return (length);
	for (length = 0; s[length]; length++)
		;
	return (length);
}

/**
 * _strcmp - compares two strings.
 * @s1: the first string 
 * @s2: the second string
 *
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

