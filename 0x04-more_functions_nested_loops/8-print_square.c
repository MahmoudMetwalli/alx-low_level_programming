#include "main.h"


/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 */
void print_square(int size)
{
	int i;
	int j;

	i = 1;
	while (i <= size)
	{
		j = 1;
		while (j <= size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
