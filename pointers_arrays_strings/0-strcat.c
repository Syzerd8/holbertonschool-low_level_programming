#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcat - appends 2 string
 * @dest: overwriting
 * @src: adds null byte
 * Return: 0
*/
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int len = 0;

	while (dest[index++])
		len++;

	for (index = 0; src[index]; index++)
		dest[len++] = src[index];

	return (dest);
}
