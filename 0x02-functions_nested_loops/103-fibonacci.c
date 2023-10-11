#include <stdio.h>
/**
 * main - Write a program that prints the first 50 Fibonacci numbers
 * Return: 50 number
 */
int main(void)
{
	unsigned long int q = 1, w = 2, next, sum = 0;

	while (w <= 4000000)
	{
		if (w % 2 == 0)
		{
			sum += w;
		}
		next = q + w;
		q = w;
		w = next;
	}
	printf("%lu\n", sum);
	return (0);
}
