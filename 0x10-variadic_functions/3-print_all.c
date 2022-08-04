#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *all;
	int x;

	va_start(ap, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[x])
	{
		switch (format[i])
		{
			case 'c':
				printf("%d", (char) va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(ap, double));
				break;
			case 's':
				all = va_start(ap, cahr*);
				if (all != NULL)
				{
					printf("%s", all);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[x] == 'c' || format[x] == 'i' || format[x] == 'f' || format[x] == 's') && format[(x + 1)] != '\0')
			printf(", ");
		x++;
	}
	va_end(ap);
	printf("\n");
}



