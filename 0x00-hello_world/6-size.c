#include <stdio.h>
/**
 * main -Entry point
 * Description: 'C program that prints the size of various types on the computer it is compiled and run on'
 * return: Always 0 (success)
 */
int main(void)
{
	int a;
	char b;
	float l;
	long int c;
	long long int d;
printf("Size of a char: %d byte(s)\n", sizeof(b));
printf("Size of an int: %d byte(s)\n", sizeof(a));
printf("Size of a long int: %d byte(s)\n", sizeof(c));
printf("Size of a long long int: %d byte(s)\n", sizeof(d));
printf("Size of a float: %d byte(s)\n", sizeof(f));
	 return (0);
}
