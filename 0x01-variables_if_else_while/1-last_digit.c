#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Print last number of a random digit
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int tmp;

	tmp = n % 10;

	if (tmp > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, tmp);
	}
	else if (tmp == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, tmp);
	}
	else if (tmp < 6 && tmp != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, tmp);
	}
	return (0);
}
