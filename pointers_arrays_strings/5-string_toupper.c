#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change lowercase of a string to uppercase
 * @ptr: look up !
 * Return: 0
 */
char *string_toupper(char *ptr)
{
	int index = 0;

	while (ptr[index++])
	{
		if (ptr[index] >= 'a' && ptr[index] <= 'z')
			ptr[index] -= 32;
	}

	return (ptr);
}

