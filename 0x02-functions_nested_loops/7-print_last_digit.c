#include "main.h"


/**
 * print_last_digit - prints the last digit of a number
 * @a: the digit desired
 * Return: Always 0
 */
int print_last_digit(int a)
{
	if (a < 0)
	{
		a = (a % 10) * -1;
	}
	else
	{
		a = (a % 10);
	}
	_putchar(a + '0');
	return (a);
}
