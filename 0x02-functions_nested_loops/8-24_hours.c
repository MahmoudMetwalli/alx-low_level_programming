#include "main.h"


/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int a;
	int b;

	a = 0;
	while (a < 24)
	{
		_putchar((a / 10) + '0');
		_putchar((a % 10) + '0');
		_putchar(':');
		for (b = 0; b < 60; b++)
		{
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
		_putchar('\n')
		a++;
	}
}
