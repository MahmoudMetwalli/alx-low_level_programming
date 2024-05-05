#include "search_algos.h"
/**
 * linear_search - utilizes linear search algorithm to find element
 * @array: array to be searched
 * @size: size of array
 * @value: value of target element
 * Return: index of target element or -1 if faild
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
