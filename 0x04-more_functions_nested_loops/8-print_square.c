#include "main.h"


/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 */
void print_square(int size)
{
	int i;

	i = 1;
	while (i <= size)
	{
		_putchar('#');
		i++;
	}
	_putchar('\n');
}
