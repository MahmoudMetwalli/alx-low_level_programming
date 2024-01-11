#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list
 * @head: head of list
 * @index: index to be deleted
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int pos = 0;
	dlistint_t *curr, *curr2, *curr3;

	if (!head)
		return (-1);
	if (*head)
	{
		curr = *head;
		if  (!index)
		{
			if (curr->next)
			{
				*head = curr->next;
				(*head)->prev = NULL;
				free(curr);
			}
			else
			{
				free(head);
				free(curr);
			}
			return (1);
		}
		while (curr->next && pos < (index - 1))
		{
			curr = curr->next;
			pos++;
		}
		if (!curr->next || pos != (index - 1))
			return (-1);
		curr2 = curr->next;
		curr3 = curr2->next;
		curr->next = curr3;
		if (curr3)
			curr3->prev = curr;
		free(curr2);
		return (1);
	}
	return (-1);
}
