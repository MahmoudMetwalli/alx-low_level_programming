#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to fisrt node
 * @str: elemnt of list_t
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int l;

	for (l = 0; str[l]; l++)
	;
	new = (list_t *)malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = l;
	new->next = *head;
	*head = new;
	return (*head);
}
