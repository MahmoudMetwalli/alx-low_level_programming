#include "search_algos.h"
/**
 * iterate_list_after_skip - iterates a list
 * @start: starting pointer
 * @steps: number of steps
 * Return: pointer to ending pointer or NULL
*/
skiplist_t *iterate_list_after_skip(skiplist_t *start, size_t steps)
{
	size_t i = 0;
	skiplist_t *end = start;

	while (end->next != NULL && i < steps)
	{
		end = end->next;
		i++;
	}
	return (end);
}
/**
 * jump_list - utilizes jump search algorithm to find element
 * @list: list to be searched
 * @size: size of list
 * @value: value of target element
 * Return: target element or NULL if faild
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *low = list, *high;

	if (list == NULL)
		return (NULL);
	high = low->express;
	while (high != NULL)
	{
		printf("Value checked at index [%ld] = [%d]\n", high->index, high->n);
		if (low->n <= value && value <= high->n)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			low->index, high->index);
			while (low != high->next)
			{
				printf("Value checked at index [%ld] = [%d]\n",
				low->index, low->n);
				if (low->n == value)
					return (low);
				low = low->next;
			}
		}
		low = high;
		high = high->express;
	}
	high = iterate_list_after_skip(low, 100);
	printf("Value found between indexes [%ld] and [%ld]\n",
	low->index, high->index);
	while (low != high->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", low->index, low->n);
		if (low->n == value)
			return (low);
		low = low->next;
	}
	return (NULL);
}
