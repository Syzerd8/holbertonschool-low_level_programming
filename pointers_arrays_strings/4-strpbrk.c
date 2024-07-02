#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searche a string for any of  a set of bytes
 * @s: string
 * @accept: bytes inside
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
