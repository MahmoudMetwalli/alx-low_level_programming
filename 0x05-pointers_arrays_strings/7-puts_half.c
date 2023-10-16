#include "main.h"


/**
 * puts_half -  prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int n, b;

	n = 0;
	while (*(str + n) != '\0')
	{
		n++;
	}
	if ((n % 2) == 0)
	{
		b = n / 2;
		while (b < n)
		{
			_putchar(*(str + b));
			b++;
		}
	}
	else
	{
		b = ((n - 1) / 2) + 1;
		while (b < n)
		{
			_putchar(*(str + b));
			b++;
		}
	}
	_putchar('\n');
}
