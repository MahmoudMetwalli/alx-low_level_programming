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
		b = 0;
		while (b <= (n/2))
		{
			_putchar(*(str + b));
			b++;
		}
	}
	else
	{
		b = 0;
		while (b <= ((n - 1)/2))
		{
			_putchar(*(str + b));
			b++;
		}
	}
	_putchar('\n');
}
