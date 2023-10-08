#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{

		b = a + 1;
		while (b < 10)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');

			if (a == 8 && b == 9)
				break;

			putchar(',');
			putchar(' ');
			b++;
		}
	}
	putchar('\n');

	return (0);
}
