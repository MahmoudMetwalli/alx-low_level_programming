#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head of list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	if (head)
	{
		while (head->next)
		{
			curr = head->next;
			free(head);
			head = curr;
		}
		free(head);
	}
}
