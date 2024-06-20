#include <stdio.h>

/**
 * main - all possible combinations numbers
 * putchar cuz no printf, puts...
 * Return: merci tara
 */

int main(void)
{
	int sdn;

	for (sdn = '0'; sdn <= '9'; sdn++)
	{
		putchar(sdn);
		if (sdn != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
