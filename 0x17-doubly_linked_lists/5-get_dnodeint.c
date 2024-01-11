#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of list
 * @index: index to be found
 * Return: the nth node of a dlistint_t linked list or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int t = 0;

	curr = head;
	if (head)
	{
		while (curr->next && t < index)
		{
			curr = curr->next;
			t++;
		}
		if (!curr->next && t != index)
		{
			return (NULL);
		}
		return (curr);
	}
	return (NULL);
}
