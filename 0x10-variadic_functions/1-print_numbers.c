#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers,
 * @separator: string to be printed between numbers
 * @n:  is the number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int all;
	unsigned int x;
	va_list ap;

	va_start(ap, n);
	for (x = 0; x < n; x++)
	{
		all = va_arg(ap, int);
		printf("%d", all);
		if (separator == NULL)
			continue;

		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
