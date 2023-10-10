#include "main.h"


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char putchAR[] = "_putchar";
	int n;
	
	for (n = 0; n <= 7; n++)
		_putchar(putchAR[n]);
	_putchar('\n');
	return (0);
}
