#include "main.h"
#include <stdio.h>

/**
 * more_numbers - 0 to 14
 * putchar 3x max
 * Return: 0
 */

void more_numbers(void)
{
	int z, y;

	for (z = 0; z < 10; z++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
				_putchar (y / 10 + '0');
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}
