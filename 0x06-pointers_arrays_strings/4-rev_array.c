#include "main.h"


/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elemnts of array
 */
void reverse_array(int *a, int n)
{
	int j = 0;

	n = n - 1;
	while (j < n)
	{
		a[j] = a[n];
		j++;
		n--;
	}
}
