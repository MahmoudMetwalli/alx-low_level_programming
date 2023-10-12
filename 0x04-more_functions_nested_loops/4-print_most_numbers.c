#include "main.h"


/**
 * print_most_numbers - prints the numbers from 0 to 9
 */
void print_most_numbers(void)
{
	char h;

	for (h = '0'; h <= '9'; h++)
	{
		if ((h == '2') || (h == '4'))
		{
			continue;	
		}
		else
		{
			_putchar(h);
		}
	}
	_putchar('\n');
}
