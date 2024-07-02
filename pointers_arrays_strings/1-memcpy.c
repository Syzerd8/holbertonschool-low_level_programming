#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @n: copies those bytes
 * @src: from this memory area
 * @dest: to this memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
