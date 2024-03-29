#include "hash_tables.h"
/**
 * set_data - adds a new node at the beginning of list
 * @head: pointer to fisrt node
 * @key: key of value
 * @value: value
 * Return: address of new element
 */
int set_data(hash_node_t **head, char **key, char **value)
{
	hash_node_t *new, *current;

	current = *head;
	while (current && strcmp(current->key, *key))
	{
		current = current->next;
	}
	if (current && !strcmp(current->key, *key))
	{
		free(current->value);
		current->value = *value;
		free(*key);
		return (1);
	}
	new = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!new)
	{
		return (0);
	}
	new->key = *key;
	new->value = *value;
	new->next = *head;
	*head = new;
	return (1);
}
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key to value
 * @value: value
 * Return: 1 on success else 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *key_2, *value_2;

	if (!strlen(key) || !key || !ht)
		return (0);
	key_2 = malloc(sizeof(key));
	if (!key_2)
		return (0);
	value_2 = malloc(sizeof(value));
	if (!value_2)
		return (0);
	strcpy(key_2, key);
	strcpy(value_2, value);
	index = key_index((unsigned char *)key_2, ht->size);
	return (set_data(&ht->array[index], &key_2, &value_2));
}
