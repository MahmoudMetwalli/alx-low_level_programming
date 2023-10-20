#include "main.h"


/**
 * print_number - prints an integer
 * @n: int to be printed
 */
void print_number(int n)
{
	unsigned int k, m;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			k = -n;
			_putchar('-');
		}
		else
		{
			k = n;
		}
		m = 1000000000;
		do {
			if (k >= m)
			{
				_putchar((k / m % 10) + '0');
			}
			m /= 10;
		} while (m != 0);
	}
}
