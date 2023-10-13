#include "main.h"
#include <stdio.h>

/**
 * print_number - Write a function that prints an integer.
 * @number: The number to print
 */

void print_number(int number)
{
	unsigned int num = number;

	if (number < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
