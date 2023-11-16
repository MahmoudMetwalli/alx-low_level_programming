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

	if (head)
	{
		while (head && head->next)
		{
			crnt = head;
			head = head->next;
			if (crnt->str)
				free(crnt->str);
			if (crnt)
				free(crnt);
		}
		if (head->str)
			free(head->str);
		if (head->next)
			free(head->next);
		free(head);
	}
}
