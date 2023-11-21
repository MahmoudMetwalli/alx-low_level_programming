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

	int r = 0;

	if (head)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			r++;
			head = head->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		r++;
		return (r);
	}
	exit(98);
}
