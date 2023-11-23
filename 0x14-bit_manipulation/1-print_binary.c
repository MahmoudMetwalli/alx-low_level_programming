#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number.
 * @n: num to be printed
 */
void print_binary(unsigned long int n)
{
	int i, slot, start = 0;

	for (slot = sizeof(n) * 8 - 1; slot >= 0; slot--)
	{
		i = ((n >> slot) & 1);
		if (i == 1)
			start = 1;
		if (start)
			_putchar(i + 48);
	}
	if (!start)
		_putchar('0');
}

