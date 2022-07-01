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
	printf("last digit of %d is\n", n)

	if (n > 5)
		printf(" greater than 5");
	else if (n % 10 == 0)
		printf("Last digit of %d is n  and is 0\n", n % 10);
	else
		printf("Last digit of %d is n and is less than 6 and not 0\n", n%5);

	return (0);
}
