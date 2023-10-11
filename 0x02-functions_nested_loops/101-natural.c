#include <stdio.h>

/**
 * main - Write a function that prints the n times table,
 * Return: the last number
 */

int main(void)
{
	int L = 1024;
	int s = 0;
	int n;

	for (n = 0; n < L; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			s += n;
		}
	}
	printf("%d\n", s);

	return (0);
}
