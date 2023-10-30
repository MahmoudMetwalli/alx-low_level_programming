#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @hight: height of the array
 * Return: pointer to 2 dimensional array of integers or null
 */
int **alloc_grid(int width, int height)
{
	int *a;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	a = calloc(width * height, sizeof(int));
	if (a != 0)
	{
		return (a);
	}
	else
	{
		return (0);
	}
}
