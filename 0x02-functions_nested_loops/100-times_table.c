#include "main.h"

/**
 * print_times_table - Write a function that prints the n times table,
 * @n: times n table
 */

void print_times_table(int n)
{
	int r, c, re;

	if (n < 0 || n > 15)
		return;
	for (r = 0; r <= n; r++)
	{
		for (c = 0; c <= n; c++)
		{
			re = r * c;
			if (c == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (re < 10)
					_putchar(' ');
				if (re < 100)
					_putchar(' ');
				if (re >= 100)
					_putchar(re / 100 + '0');
				if (re >= 10)
					_putchar((re / 10) % 10 + '0');
				_putchar(re % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
