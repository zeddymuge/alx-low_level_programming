#include "main.h"
#include <stdio.h>
#include <stdio.h>
/**
 * main - A program that prints the number of arguements you passed into it
 * @argc: An argument counter
 * @argv: An argument values
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
