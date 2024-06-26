#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap value
 * @a: 98
 * @b: 42
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
		*a = *b;
		*b = temp;
}
