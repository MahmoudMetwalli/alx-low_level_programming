#include "main.h"


/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: desired string
 */
void print_rev(char *s)
{
	int b, l, a;

	b = 0;
	while (*(s + b) != '\0')
	{
		b++;
	}
	l = b;
	for (a = l - 1; a >= 0; a--)
	{
		_putchar(*(s + a));
	}
	_putchar('\n');
}
