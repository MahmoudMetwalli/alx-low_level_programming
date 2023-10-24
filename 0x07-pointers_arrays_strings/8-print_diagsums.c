#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a: array
 * @size: array size
 */
void print_diagsums(int *a, int size)
{
	int i, j, k;
	
	i = 0;
	j = 0;
	for (k = 0; k < size; k++)
	{
		i = (*(a + (k * size + k) * 4)) + i;
		j = (*(a + ((k * size + ((size - k) * 4))))) + j;
	}
	printf("%d, %d\n", i , j);
}
