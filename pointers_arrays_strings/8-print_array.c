#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - marche stp
 * @a: print n elements
 * @n: array integers
 * Return: 0
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
		printf(", ");
		}
	}
	printf("\n");
}
