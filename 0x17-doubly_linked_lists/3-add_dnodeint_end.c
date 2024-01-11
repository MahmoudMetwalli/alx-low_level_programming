#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of node
 * @n: value of node
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new;

	current = *head;
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new)
	{
	return (NULL);
	}
	new->n = n;
	new->next = NULL;
	while (current && current->next)
	{
		current = current->next;
	}
	if (current)
	{
		current->next = new;
		new->prev = current;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}
	return (new);
}
