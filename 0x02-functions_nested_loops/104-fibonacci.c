#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long int z1 = 0, y1 = 1, z2 = 0, y2 = 2;
	unsigned long int a, b, c;

	printf("%lu, %lu, ", y1, y2);
	for (count = 2; count < 98; count++)
	{
		if (y1 + y2 > LARGEST || z2 > 0 || z1 > 0)
		{
			a = (y1 + y2) / LARGEST;
			b = (y1 + y2) % LARGEST;
			c = z1 + z2 + a;
			z1 = z2, z2 = c;
			y1 = y2, y2 = b;
			printf("%lu%010lu", z2, y2);
		}
		else
		{
			b = y1 + y2;
			y1 = y2, y2 = b;
			printf("%lu", y2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
