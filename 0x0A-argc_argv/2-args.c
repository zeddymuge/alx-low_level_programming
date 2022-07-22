#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - checks main
 * @argc: An argument counter
 * @argv: argument value
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
