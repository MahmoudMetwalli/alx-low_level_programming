#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list
 * @head: struct list
 * @index: index of node to be deleted
 * Return: 1 if succeeded and -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int pos = 0;
	listint_t *curr, *curr2, *curr3;

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
		free(curr2);
		return (1);
	}
	return (-1);
}
