#include "main.h"


/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elemnts of array
 */
void reverse_array(int *a, int n)
{
	int j = 0, t, k;

	n = n - 1;
	while (j < n)
	{
		t = a[j];
		k = a[n];
		a[n] = t;
		a[j] = k;
		j++;
		n--;
	}
}
