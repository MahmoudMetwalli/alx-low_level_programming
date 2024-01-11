#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head of list
 * @n: value of node
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	printf("here!");
	new->n = n;
	new->next = *head;
	(*head)->prev = new;
	new->prev = NULL;
	*head = new;
	return (new);
}
