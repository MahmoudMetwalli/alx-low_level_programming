#ifndef VARIADIC
#define VARIADIC
#include <stdarg.h>
/**
 * struct type - to select type of printing
 * @h: specifier
 * @g: function to print
 */
typedef struct type
{
	char h;
	void (*g)(va_list);
} type;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
