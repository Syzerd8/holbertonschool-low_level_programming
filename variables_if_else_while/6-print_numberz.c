#include <stdio.h>

/**
 * main - no char variable
 * Return: all numbers of base 10 starting from 0 without printf, puts
 */

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
