#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	{
	printf("%d ", n);
	}
	if (n > 0)
	{
	   printf("n is positive\n");
	}
	else if (n == 0)
	{
	printf("n is zero\n");
	}
	else (n < 0)
	{
	printf("n is negative\n");
	}
	return (0);
}
