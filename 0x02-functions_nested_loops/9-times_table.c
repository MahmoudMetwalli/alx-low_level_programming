#include "main.h"


/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a < 10)
	{
		for (b = 0; b < 10; b++)
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
