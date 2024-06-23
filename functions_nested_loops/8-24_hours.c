#include "main.h"

/**
 * jack_bauer - jve ossi regardé 1 séri
 * : isnogood
 * Return: Always 0
 */

void jack_bauer(void)
{
	int m, h;

	for (m = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar(':');
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar('\n');
		}
	}
}
