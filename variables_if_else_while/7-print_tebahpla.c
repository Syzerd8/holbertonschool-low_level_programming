#include <stdio.h>

/**
 * main - lower case in reverse
 * putchar cuz no printf, puts
 * Return: first try ez ?
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
