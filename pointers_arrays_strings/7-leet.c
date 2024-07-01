#include "main.h"
#include <stdio.h>

/**
 * leet - change lowercase of a string to uppercase
 * @ptr: look up !
 * Return: 0
 */
char *leet(char *ptr)
{
	char *z = ptr;
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {4, 3, 0, 7, 1};
	int i = 0;

	while (*ptr)
	{
		for (i = 0; i < 5; i++)
		{
			if (*ptr == a[i] || *ptr == a[i] - 32)
				*ptr = n[i] + '0';
		}
		ptr++;
	}
	return (z);
}
