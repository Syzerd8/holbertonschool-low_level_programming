#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenate strings again
 * @dest : pointer
 * @src : pointer too
 * @n : int
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int z, y;

	for (z = 0; dest[z] != '\0'; z++)
		;
	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[z + y] = src[y];
	}
	return (dest);
}
