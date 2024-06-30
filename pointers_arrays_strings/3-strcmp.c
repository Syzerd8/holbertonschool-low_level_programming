#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares 2 strings
 * @s1 : pointer
 * @s2 : pointer too
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int z;

	for (z = 0; s1[z] != '\0' && s2[z] != '\0'; z++)
	{
		if (s1[z] != s2[z])
			return (s1[z] - s2[z]);
	}
	return (0);
}
