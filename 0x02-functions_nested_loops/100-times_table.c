#include "main.h"


/**
 * print_times_table - prints the n times table, starting with 0
 * @n:n table
 */
void print_times_table(int n)
{
	int a;
	int b;
	int c;

	if (n > 15 && n < 0)
		break;
	a = 0;
	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			c = b * a;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (c >= 10)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else if (c <= 10 && b != 0)
			{
				_putchar(' ');
				_putchar(c + '0');
			}
			else
			{
				_putchar(c + '0');
			}
		}
		_putchar('\n');
		a++;
	}
}
