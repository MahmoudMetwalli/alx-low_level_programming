#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - function that searches for an integer
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to function
 * Return: wanted int or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			j = (cmp(array[i]));
			if (j != 0)
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}
