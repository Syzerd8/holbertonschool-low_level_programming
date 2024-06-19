#include <stdio.h>

/**
 * main - lower case
 * putchar cuz no printf, puts
 * Return: 0 one day i will
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
