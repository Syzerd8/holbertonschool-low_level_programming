#include "main.h"
#include <stdio.h>

/**
 * _strspn - length of a prefix substring
 * @s: initial segment
 * @accept: bytes
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int j = 0, i = 0;
	unsigned int z = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				z++;
			j++;
		}
		i++;
		j = 0;
	}
	return (z);
}
