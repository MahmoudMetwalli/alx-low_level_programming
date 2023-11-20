#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a list and set NULL
 * @head: struct to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (!head)
	{
		return;
	}
	if (*head)
	{
		while ((*head)->next)
		{
			curr = (*head)->next;
			free(*head);
			*head = curr;
		}
		free(*head);
		*head = NULL;
	}
}
