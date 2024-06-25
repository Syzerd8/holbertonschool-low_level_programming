#include "main.h"
#include <stdio.h>

/**
 * print_line - ligne
 * @n: ligne
 * Return: 0
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int z;

		for (z = 1; z <= n; z++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
