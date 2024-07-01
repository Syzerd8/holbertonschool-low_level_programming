#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the content of an array of integers
 * @a : pointer
 * @n : integer
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int len, i;

	for (i = n - 1; i > n / 2; i++)
	{
		len = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = len;

	}

}
