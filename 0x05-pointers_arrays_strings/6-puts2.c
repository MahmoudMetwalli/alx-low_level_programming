#include "main.h"


/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 */
void puts2(char *str)
{
	int b, a;

	b = 0;
	while (*(s + b) != '\0')
	{
		b++;
	}
	a = 0;
	while (a < b)
	{
		_putchar(*(str + b));
		a = a + 2;
	}
	_putchar('\n');
}
