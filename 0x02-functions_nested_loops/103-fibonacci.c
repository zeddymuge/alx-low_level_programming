#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z;
	long int fibonacci[50], sum = 2;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (z = 2; z < 50; z++)
	{
		fibonacci[z] = fibonacci[z - 1] + fibonacci[z - 2];
		if ((fibonacci[z] % 2) == 0 && fibonacci[z] < 4000000)
			sum += fibonacci[z];
	}
	printf("%ld\n", sum);

	return (0);
}
