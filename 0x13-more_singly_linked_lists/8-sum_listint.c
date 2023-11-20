#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: struct list
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int n = 0;
	listint_t *curr;

	if (head)
	{
		curr = head;
		while (curr->next)
		{
			n += curr->n;
			curr = curr->next;
		}
		n += curr->n;
	}
	return (n);
}
