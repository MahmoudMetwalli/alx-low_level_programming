#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 50 numbers
 */
int main(void)
{
	int u;
	int i = 50;
	unsigned long int e = 1, f = 2;

	printf("%lu, %lu", e, f);

	for (u = 2; u < i; u++)
	{
		unsigned long int t = e + f;

		printf(", %lu", t);
		e = f;
		f = t;
	}
	printf("\n");

	return (0);
}
