#include "lists.h"
#include "stdlib.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: struct list
 * @n: value of node
 * Return: address to new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new;

	current = *head;
	new = (listint_t *)malloc(sizeof(listint_t));
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
	}
	else
	{
		*head = new;
	}
	return (new);
}
