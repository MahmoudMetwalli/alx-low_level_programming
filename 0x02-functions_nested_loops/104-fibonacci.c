#include <stdio.h>

/**
 * main - Write a program that prints the first 50 Fibonacci numbers,
 * Return: 92
 */
int main(void)
{
	int theFirst98Fibonacci(void);
	theFirst98Fibonacci();
	return (0);
}

/**
 * theFirst98Fibonacci - Write a program that prints first 98
 * Return: 98
 */
int theFirst98Fibonacci(void)
{
	int ct;
	unsigned long ct1, ct2, next, ct1Tds,
	ct2Tds, nTds, carry;
	
	ct = 0;
	ct1 = 0;
	ct2 = 1;

	for (ct = 1; ct <= 91; ct++)
	{
		next = ct1 + ct2;
		ct1 = ct2;
		ct2 = next;
		printf("%lu, ", next);
	}

	ct1Tds = ct1 % 1000;
	ct1 = ct1 / 1000;
	ct2Tds = ct2 % 1000;
	ct2 = ct2 / 1000;

	while (ct <= 98)
	{
		carry = (ct1Tds + ct2Tds) / 1000;
		nTds = (ct1Tds + ct2Tds) - carry * 1000;
		next = (ct1 + ct2) + carry;
		ct1Tds = ct2Tds;
		ct2Tds = nTds;
		ct1 = ct2;
		ct2 = next;

		if (nTds >= 100)
			printf("%lu%lu", next, nTds);
		else
			printf("%lu0%lu", next, nTds);

		if (ct != 98)
			printf(", ");

		ct++;
	}

	putchar('\n');
	return (0);
}
