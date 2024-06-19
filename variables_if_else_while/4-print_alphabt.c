#include <stdio.h>

/**
 * main - lower case
 * putchar and without char q and e
 * Return: give me my chance pls
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
