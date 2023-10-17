#include "main.h"
#include <stdio.h>


/**
 * print_array -  prints n elements of an array
 * @a: array
 * @n: num of elemnts to be printed
 */
void print_array(int *a, int n)
{
	int b;

	if (n >= 1)
	{
		printf("%d", *a);
		b = 1;
		while (b < n)
		{
			printf(", %d", *(a + b));
			b++;
		}
	}
	printf("\n");
}
