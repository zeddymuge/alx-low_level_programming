#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: n arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;                                                                                                                                                       if (argc != 3)
	{
		puts("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}

	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	puts(mul);
return (0);
}
