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
		if (!head)
		{
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next < head)
		{
			return (1 + print_listint_safe(head->next));
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (1);
		}
	}
	return (0);
}
