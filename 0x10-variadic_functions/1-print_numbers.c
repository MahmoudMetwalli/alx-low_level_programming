#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separates numbers
 * @n: num of args
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int x;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
		{
			printf("%s", separator);
		}
		x = va_arg(args, int);
		printf("%d", x);
	}
	va_end(args);
	printf("\n");
}
