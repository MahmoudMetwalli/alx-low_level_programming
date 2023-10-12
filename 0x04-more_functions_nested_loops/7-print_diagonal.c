#include "main.h"


/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i;
	int j;
	int k;

	i = 1;
	while (i <= n)
	{
		j = i - 1;
		k = 0;
		while (k < j)
		{
			_putchar(' ');
			k++;
		}
		_putchar(92);
		_putchar('\n');
		i++;
	}
	if ((n == 0) || ((n % 10) == 0))
	{
	_putchar('\n');
	}
}
