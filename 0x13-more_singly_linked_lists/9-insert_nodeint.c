#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: struct list
 * @idx: postion to insert node
 * @n: value of added node
 * Return: added node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int pos = 0;
	listint_t *curr, *curr2, *new;

	if (!head)
	{
		return (NULL);
	}
	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	if (*head)
	{
		curr = *head;
		if (idx == 0)
		{
			new->n = n;
			new->next = *head;
			*head = new;
			return (*head);
		}
		while (curr->next && pos < (idx - 1))
		{
			curr = curr->next;
			pos++;
		}
		if (!curr->next && pos != (idx - 1))
		{
			return (NULL);
		}
		curr2 = curr->next;
		new->n = n;
		curr->next = new;
		new->next = curr2;
		return (new);
	}
	return (NULL);
}
