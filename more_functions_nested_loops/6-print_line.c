#include "main.h"
#include <stdio.h>

/**
 * print_line - ligne
 * @n: ligne
 * Return: 0
 */
void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_');
	}
	else if (n <= 0)
	{
		_putchar(n);
	}
_putchar('\n');
}
