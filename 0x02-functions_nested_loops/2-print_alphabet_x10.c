#include "main.h"

/**
 * print_alphabet - prints the english alphabet from a-z 10 times
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char g;
	int b;

	b = 0;
	while (b <= 9)
	{
		for (g = 'a'; g <= 'z'; g++)
		{
			_putchar(g);
		}
		_putchar('\n');
		b++;
	}
}
