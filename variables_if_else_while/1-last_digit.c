#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - last digit of
 *greater, less and is
 *Return: dont make me cry pls
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int z = n % 10;

	if (z > 5)
	printf("The last digit of %d is %d and is greater than 5\n", n, z);
	else if (z < 6 && z != 0)
	printf("The last digit of %d is %d and is less than 6 and not 0\n", n, z);
	else
	printf("The last digit of %d is %d and is 0\n", n, z);
	return (0);
}
