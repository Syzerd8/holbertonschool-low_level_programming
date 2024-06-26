#include "main.h"
#include <stdio.h>

/**
 * _strlen - length
 * @s: *
 * Return: 0
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
