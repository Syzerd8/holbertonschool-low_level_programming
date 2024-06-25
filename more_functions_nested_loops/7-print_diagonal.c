
#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - back slash everywhere
 * @n: same
 * Return: 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int z, y;

		for (z = 0; z < n; z++)
		{
			for(y = 0; y < z; y++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
