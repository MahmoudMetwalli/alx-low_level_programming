#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to 2 dimensional array of integers or null
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	*a = malloc(width * height * sizeof(int));
	if (*a != 0)
	{
		for (i = 0; i < (width * height); i++)
		{
			*a[i] = 0;
		}
		return (*a);
	}
	else
	{
		return (0);
	}
}
