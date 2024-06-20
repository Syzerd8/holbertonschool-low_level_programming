#include <stdio.h>

/**
 * main - all numbers of base 16 lowercase
 * putchar cuz no printf, puts
 * Return: a little idea
 */

int main(void)
{
	char nb, lt;

	for (nb = '0'; nb <= '9'; nb++)
	{
		putchar(nb);
	}

	for (lt = 'a'; lt <= 'f'; lt++)
	{
		putchar(lt);
	}
	putchar('\n');
	return (0);
}
