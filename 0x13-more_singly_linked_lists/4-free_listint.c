#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a list
 * @head: struct to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

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
