#include "main.h"


/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 */
void puts2(char *str)
{
	int b, a, l;

	b = 0;
	while (*(str + b) != '\0')
	{
		b++;
	}
	l = b - 1;
	a = 0;
	while (a < l)
	{
		_putchar(*(str + b));
		a = a + 2;
	}
	_putchar('\n');
}
