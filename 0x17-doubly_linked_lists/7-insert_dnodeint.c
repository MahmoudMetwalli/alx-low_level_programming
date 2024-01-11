#include "lists.h"
void assign(dlistint_t **currp, dlistint_t **currn, dlistint_t **new, int *n);
/**
 * assign - assigns nodes
 * @currp: previous node
 * @currn: next node
 * @new: new node
 * @n: value of node
*/
void assign(dlistint_t **currp, dlistint_t **currn, dlistint_t **new, int *n)
{
		*currn = (*currp)->next;
		(*new)->n = *n;
		(*currp)->next = *new;
		(*new)->next = *currn;
		if (*currn)
			(*currn)->prev = *new;
		(*new)->prev = *currp;
}
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of node
 * @idx: index
 * @n: value of node
 * Return: inserted node or null
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int pos = 0;
	dlistint_t *curr, *curr2, *new;

	if (!h)
		return (NULL);
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (*h)
	{
		curr = *h;
		if (!idx)
		{
			new->n = n;
			new->next = *h;
			new->prev = NULL;
			(*h)->prev = new;
			*h = new;
			return (*h);
		}
		while (curr->next && pos < (idx - 1))
		{
			curr = curr->next;
			pos++;
		}
		if (!curr->next && pos != (idx - 1))
			return (NULL);
		assign(&curr, &curr2, &new, &n);
		return (new);
	}
	if (!(*h) && !idx)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (*h);
	}
	return (NULL);
}
