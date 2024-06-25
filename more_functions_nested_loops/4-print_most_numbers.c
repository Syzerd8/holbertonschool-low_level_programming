#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - 0 to 9
 * no print 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int z = '0';

	while (z <= '9')
	{
		if (z != '2' && z != '4')
		{
			_putchar(z);
		}
		z++;
	}
	_putchar('\n');
}
