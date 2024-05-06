#include "search_algos.h"
#include "math.h"
/**
 * jump_search - utilizes jump search algorithm to find element
 * @array: array to be searched
 * @size: size of array
 * @value: value of target element
 * Return: index of target element or -1 if faild
*/
int jump_search(int *array, size_t size, int value)
{
	size_t lower = 0, higher, jump, iterate;

	if (array == NULL || size == 0)
		return (-1);
	higher = jump = sqrt(size);
	while (higher < size)
	{
		printf("Value checked array[%ld] = [%d]\n", lower, array[lower]);
		if (array[lower] <= value && value <= array[higher])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", lower, higher);
			for (iterate = lower; iterate <= higher; iterate++)
			{
				printf("Value checked array[%ld] = [%d]\n", iterate, array[iterate]);
				if (array[iterate] == value)
					return (iterate);
			}
		}
		lower += jump;
		higher += jump;
	}
	if (higher >= size)
	{
		higher = size - 1;
		printf("Value checked array[%ld] = [%d]\n", lower, array[lower]);
		if (array[lower] <= value && value <= array[higher])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", lower, higher);
			for (iterate = lower; iterate <= higher; iterate++)
			{
				printf("Value checked array[%ld] = [%d]\n", iterate, array[iterate]);
				if (array[iterate] == value)
					return (iterate);
			}
		}
	}
	return (-1);
}
