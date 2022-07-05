#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z, sum = 0;

	for (z = 0; z < 1024; z++)
	{
		if ((z % 5) == 0 || (z % 3) == 0)
			sum += z;
	}
	printf("%d\n", sum);

	return (0);
}

