#include "main.h"


/**
 *  _abs - computes the absolute value of an integer.
 *  @a: number that its absolute value will be computed.
 *  Return: Always 0
 */
int _abs(int a)
{
	int b; b = a - 2*a;

	if (a > 0)
	{
		_putchar(a + '0');
	}
	else if (a == 0)
	{
		_putchar('0');
	}
	else 
	{
		_putchar(b + '0');
	}
	return (0);
}
