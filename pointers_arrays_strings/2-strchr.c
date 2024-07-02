#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a characater
 * @s: string
 * @c: first occurence
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
