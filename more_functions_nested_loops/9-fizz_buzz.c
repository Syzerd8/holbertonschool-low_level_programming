#include <stdio.h>

/**
 * main - multiple de 3
 * multiple de 5
 * multiple de 15
 * Return: 0
*/

int main(void)
{
	int z;

	for (z = 1; z <= 100; z++)
	{
		if (z % 3 == 0 && z % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (z % 5 == 0 && z % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (z % 5 == 0 && z % 3 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (z == 1)
		{
			printf("%d", z);
		}
		else
		{
			printf(" %d", z);
		}
	}
	putchar('\n');
	return (0);
}
