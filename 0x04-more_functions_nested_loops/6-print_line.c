#include "main.h"


/**
 * print_line - draws a straight line in the terminal
 * @n: length if the line
 */
void print_line(int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
