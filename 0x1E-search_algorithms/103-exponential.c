#include "search_algos.h"
/**
 * exponential_search - utilizes exponential search algorithm to find element
 * @array: array to be searched
 * @size: size of array
 * @value: value of target element
 * Return: index of target element or -1 if faild
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t mid, lower, higher, print, expo = 1;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);
	while (expo < size && array[expo] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", expo, array[expo]);
		expo *= 2;
	}
	lower = expo / 2;
	if (expo >= size)
		higher = size - 1;
	else
		higher = expo;
	printf("Value found between indexes [%ld] and [%ld]\n", lower, higher);
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
