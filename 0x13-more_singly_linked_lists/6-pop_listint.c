#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head returns it’s data
 * @head: struct list
 * Return: data stored in head node
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp;

	if (!head)
	{
		return (n);
	}
	if (*head)
	{
		n = (*head)->n;
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	return (n);
}
