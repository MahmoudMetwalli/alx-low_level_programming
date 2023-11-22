#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * safe_print_listint - function that prints a linked list with a loop safely.
 * @start: pointer to the 1st node of the linked list
 * Return: number of nodes in the linked list
 */
size_t safe_print_listint(const listint_t *start)
{
	const listint_t *current = NULL;
	const listint_t *compare_node = NULL;
	size_t node_count = 0, i;

	for (current = start; current != NULL; current = current->next)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++;
		compare_node = start;

		for (i = 0; i < node_count; ++i)
		{
			if (current == compare_node)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (node_count);
			}
			compare_node = compare_node->next;
		}

		if (!start)
			exit(98);
	}
	return (node_count);
}
