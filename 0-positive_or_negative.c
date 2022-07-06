#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point.
 * Description: assign a random number. 
 * Return : always (0)
 */
int main(void)
{
	Srand(time(0));
	n = rand() - RAND-MAX / 2;
	int x = 0;
	if(x > 0)
	        printf("%d\n, :is positive", x);
	else if(x = 0)
	        printf("%d\n, : is 0", x);
	else
		printf("%d\n, : is negative", x)
	return (0);
}
