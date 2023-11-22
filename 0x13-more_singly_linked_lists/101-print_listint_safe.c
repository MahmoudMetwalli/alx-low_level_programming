#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: struct list
 * Return: num of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next < head)
		{
			return (1 + print_listint_safe(head->next));
		}
		else if (head->next > head)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (1);
		}
		else
			exit(98);
	}
	return (0);
}
