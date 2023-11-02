#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer or null
 */
int *array_range(int min, int max)
{
	int i, l;
	int *s;

	if (min > max)
	{
		return (0);
	}
	i = max - min + 1;
	s = malloc(sizeof(int) * i);
	if (s == 0)
	{
		return (0);
	}
	for (l = 0; l < i; l++)
	{
		s[l] = min;
		min++;
	}
	return (s);
}
