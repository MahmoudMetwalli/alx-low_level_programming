#include "search_algos.h"
/**
 * recursive_binary - utilizes advanced binary search algorithm to find element
 * @array: array to be searched
 * @lower: lower bound of search
 * @higher: higher bound of search
 * @value: value of target element
 * Return: index of target element or -1 if faild
*/
int recursive_binary(int *array, size_t lower, size_t higher, int value)
{
	size_t print, mid;

	if (lower > higher)
		return (-1);
	printf("Searching in array: ");
	for (print = lower; print < higher; print++)
	{
		printf("%d, ", array[print]);
	}
	printf("%d\n", array[print]);
	mid = lower + ((higher - lower) / 2);
	if (array[mid] == value)
	{
		if (array[mid - 1] == value)
			higher = mid;
		else
			return (mid);
	}
	else if (array[mid] < value)
		lower = mid + 1;
	else
		higher = mid - 1;
	return (recursive_binary(array, lower, higher, value));
}
/**
 * advanced_binary - utilizes advanced binary search algorithm to find element
 * @array: array to be searched
 * @size: size of array
 * @value: value of target element
 * Return: index of target element or -1 if faild
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t lower = 0, higher;

	if (array == NULL || size == 0)
		return (-1);
	higher = size - 1;
	return (recursive_binary(array, lower, higher, value));
}
