#include "main.h"


/**
 * print_triangle - print triangle
 * @size: triangle size
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	i = 1;
	while (i <= size)
	{
		j = (size - i);
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		k = 1;
		while (k <= i)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
