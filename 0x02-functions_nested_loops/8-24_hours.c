#include "main.h"


/**
 * jack_bauer - prints every minute of the day 
 */
void jack_bauer(void)
{
	int a;
	int b;

	a = 0;
	while (a < 24)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
		a++;
	}
}
