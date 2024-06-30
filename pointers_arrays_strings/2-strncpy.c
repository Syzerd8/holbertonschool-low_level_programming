#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a strings
 * @dest : pointer
 * @src : pointer too
 * @n : int
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int z = 0, y = 0;

	for (; z < n && src[z] != '\0'; z++)
		;
	for (; y < z && src[y] != '\0'; y++)
	{
		dest[y] = src[y];
	}
	for (; y < n; y++)
		dest[y] = '\0';
	return (dest);
}
