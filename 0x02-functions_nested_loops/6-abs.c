#include "main.h"


/**
 *  _abs - computes the absolute value of an integer.
 *  @a: number that its absolute value will be computed.
 *  Return: Always 0
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = a * -1;
	}
	else
	{
		a = a;
	}
	return (a);
}
