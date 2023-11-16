#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - Write a function that frees a list_t list
 * @head: pointer to list_t
 */
void free_list(list_t *head)
{
	list_t *crnt;

	while (head && head->next)
	{
		crnt = head;
		head = head->next;
		free(crnt->str);
		free(crnt->next);
		free(crnt);
	}
	free(head->str);
	free(head->next);
	free(head);
}
