#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to fisrt node
 * @str: elemnt of list_t
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	unsigned int l;

	for (l = 0; str[l]; l++)
	;
	temp = *head;
	while (temp && temp->next)
	{
		temp = temp->next;
	}
	new = (list_t *)malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = l;
	new->next = NULL;
	if (temp)
	{
		temp->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
