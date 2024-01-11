#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 * @head: head of list
 * Return: the sum of all the data (n) or zero
*/
int sum_dlistint(dlistint_t *head)
{
	int n = 0;
	dlistint_t *curr;

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
