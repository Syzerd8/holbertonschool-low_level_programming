#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - vous pouvez repeter la question
 * @dest: print n elements
 * @src: array integers
 * Return: 0
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
		dest[i++] = '\0';
	return (dest);
}
