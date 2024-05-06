#include "search_algos.h"
#include "math.h"
/**
 * iterate_list_after - iterates a list
 * @start: starting pointer
 * @steps: number of steps
 * Return: pointer to ending pointer or NULL
*/
listint_t *iterate_list_after(listint_t *start, size_t steps)
{
	size_t i = 0;
	listint_t *end = start;

	while (end->next != NULL && i < steps)
	{
		end = end->next;
		i++;
	}
	return (end);
}
/**
 * iterate_list - iterates a list
 * @start: starting pointer
 * @steps: number of steps
 * Return: pointer to ending pointer or NULL
*/
listint_t *iterate_list(listint_t *start, size_t steps)
{
	size_t i = 0;
	listint_t *end = start;

	while (end->next != NULL && i < steps)
	{
		end = end->next;
		i++;
	}
	if (i == steps)
		return (end);
	return (NULL);
}
/**
 * jump_list - utilizes jump search algorithm to find element
 * @list: list to be searched
 * @size: size of list
 * @value: value of target element
 * Return: target element or NULL if faild
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step;
	listint_t *low = list, *high;

	if (list == NULL || size == 0)
		return (NULL);
	step = sqrt(size);
	high = iterate_list(list, step);
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
		high = iterate_list(high, step);
	}
	high = iterate_list_after(low, step);
	printf("Value checked at index [%ld] = [%d]\n", high->index, high->n);
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
