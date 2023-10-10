#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char putChar[] = "_putchar";
	int n;

	for (n = 0; n <= 7; n++)
	{
		putchar(putChar[n]);
	}	
	putchar('\n');
	return (0);
}

