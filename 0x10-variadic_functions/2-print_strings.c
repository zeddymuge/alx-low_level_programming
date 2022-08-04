#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n:  number of strings passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *str;
	va_list ap;

	va_start(ap, n);
	for (x = 0; x < n; x++)
	{
		str = va_arg(ap, char*);
		printf("%s", str);
		if (separator == NULL)
			continue;
		if (str == 0)
			printf("nil\n");
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

