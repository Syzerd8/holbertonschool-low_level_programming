#include "main.h"
#include <stdio.h>

/**
 * print_square - hashtag
 * @size: new line
 * Return: 0
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int z, y;

		for (y = 0; y < size; y++)
		{
			for (z = 0; z < size; z++)
			{
			_putchar('#');
			}
		_putchar('\n');
		}
	}
}
