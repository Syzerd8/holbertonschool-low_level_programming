#include "main.h"
#include <stdio.h>

/**
 * puts2 - 2 par 2
 * @str: *
 * Return: 0
 */
void puts2(char *str)
{
	int z;

	for (z = 0; str[z] != '\0'; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
