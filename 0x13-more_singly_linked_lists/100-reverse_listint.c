#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: stuct list
 * Return: first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *curr2;

	if (!head)
	{
		return (NULL);
	}
	if (*head)
	{
		if (!(*head)->next)
		{
			return (*head);
		}
		curr = (*head)->next;
		curr2 = curr->next;
		curr->next = *head;
		(*head)->next = NULL;
		while (curr2)
		{
			*head = curr;
			curr = curr2;
			curr2 = curr->next;
			curr->next = *head;
		}
		*head = curr;
	}
	return (*head);
}
