#include "main.h"
#include <stdio.h>

/**
 * print_triangle - triangle
 * @size: #
 * Return: 0
 */
void print_triangle(int size)
{
	int x, y, z;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size - 1 - x; y++)
		{
			_putchar('_');
		}
		for (z = size - x - 1; z < size; z++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
