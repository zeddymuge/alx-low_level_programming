#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *Description: 'C program for print'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
		printf("Last digit of %d is n and is greater than 5\n", n % 10);
	else if (n % 10 == 0)
		printf("Last digit of %d is n  and is 0\n", n % 10);
	else
		printf("Last digit of %d is n and is less than 6 and not 0\n", n%5);

	return (0);
}
