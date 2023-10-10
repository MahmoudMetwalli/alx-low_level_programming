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
			if (c >= 10)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
				_putchar(',');
			}
			else
			{
				_putchar(c + '0');
				_putchar(',');
				_putchar(' ');
			}
			if (b = 9)
				break;
		}
		_putchar('\n');
		a++;
	}
}
