#include "search_algos.h"
/**
 * binary_search - utilizes binary search algorithm to find element
 * @array: array to be searched
 * @size: size of array
 * @value: value of target element
 * Return: index of target element or -1 if faild
*/
int binary_search(int *array, size_t size, int value)
{
	size_t mid, lower = 0, higher = size - 1, print;

	if (array == NULL || size == 0)
		return (-1);
	while (lower <= higher)
	{
		printf("Searching in array: ");
		for (print = lower; print < higher; print++)
		{
			printf("%d, ", array[print]);
		}
		printf("%d\n", array[print]);
		mid = lower + ((higher - lower) / 2);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			lower = mid + 1;
		else
			higher = mid - 1;
	}
	return (-1);
}
