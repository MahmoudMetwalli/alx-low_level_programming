#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
		if (a =< 8)
		{	
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
