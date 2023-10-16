#include "main.h"


/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 */
void puts2(char *str)
{
	int b;

	b = 0;
	while (*(str + b) != '\0')
	{
		_putchar(*(str + b));
		b = b + 2;
	}
	_putchar('\n');
}
