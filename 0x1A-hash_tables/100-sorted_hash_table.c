#include "hash_tables.h"
/**
 * shash_table_create - function that creates a sorted hash table
 * @size: size of table
 * Return: a pointer to the newly created hash table or NULL
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_node_t **Hash_array;
	shash_table_t *Hash_T;

	Hash_T = calloc(1, sizeof(shash_table_t));
	if (!Hash_T)
	{
		return (NULL);
	}
	Hash_array = calloc(size, sizeof(char *));
	if (!Hash_array)
	{
		free(Hash_T);
		return (NULL);
	}
	Hash_T->size = size;
	Hash_T->array = Hash_array;
	Hash_T->shead = NULL;
	Hash_T->stail = NULL;
	return (Hash_T);
}
/**
 * sort_list - sorts a list according to key ASCII value
 * @ht: sorted hash table
 * @node: node to be inserted
*/
void sort_list(shash_table_t **ht, shash_node_t **node)
{
	shash_node_t *iterate;

	iterate = (*ht)->shead;
	if (!((*ht)->shead))
	{
		(*ht)->shead = *node;
		(*ht)->stail = *node;
		return;
	}
	while (iterate->snext && ((*node)->key[0] > iterate->key[0]))
	{
		iterate = iterate->snext;
	}
	if ((*node)->key[0] == iterate->key[0])
	{
		if ((*node)->key[1] && iterate->key[1])
		{
			while (iterate->snext && ((*node)->key[1] > iterate->key[1]))
			{
				iterate = iterate->snext;
			}
		}
		return;
	}
	if (iterate->snext)
	{
		(*node)->sprev = iterate->sprev;
		if (iterate->sprev)
			(iterate->sprev)->snext = *node;
		else
			(*ht)->shead = *node;
		iterate->sprev = *node;
		(*node)->snext = iterate;
		return;
	}
	if ((*node)->key[0] > iterate->key[0])
	{
		iterate->snext = *node;
		(*node)->sprev = iterate;
		(*ht)->stail = *node;
		return;
	}
	(*node)->snext = iterate;
	if ((!iterate->sprev))
		(*ht)->shead = *node;
	iterate->sprev = *node;
	(*ht)->stail = iterate;
}
/**
 * s_set_data - adds a new node at the beginning of list
 * @ht: sorted hash table
 * @hd: pointer to fisrt node
 * @ky: key of value
 * @val: value
 * Return: address of new element
 */
int s_set_data(shash_table_t **ht, shash_node_t **hd, char **ky, char **val)
{
	shash_node_t *new, *current;

	current = *hd;
	while (current && strcmp(current->key, *ky))
	{
		current = current->next;
	}
	if (current && !strcmp(current->key, *ky))
	{
		free(current->value);
		current->value = *val;
		free(*ky);
		return (1);
	}
	new = (shash_node_t *)malloc(sizeof(shash_node_t));
	if (!new)
	{
		return (0);
	}
	new->key = *ky;
	new->value = *val;
	new->next = *hd;
	new->snext = NULL;
	new->sprev = NULL;
	*hd = new;
	sort_list(ht, &new);
	return (1);
}
/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: hash table
 * @key: key to value
 * @value: value
 * Return: 1 on success else 0
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
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
	return (s_set_data(&ht, &ht->array[index], &key_2, &value_2));
}
/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: sorted hash table
 * @key: key
 * Return: value or NULL
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (!ht || !key)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current && strcmp(current->key, key))
	{
		current = current->next;
	}
	if (current && !strcmp(current->key, key))
	{
		return (current->value);
	}
	return (NULL);
}
/**
 * shash_table_print - prints a sorted hash table
 * @ht: sorted hash table
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *iterate;
	int flag = 0;

	if (!ht)
		return;
	iterate = ht->shead;
	printf("{");
	while (iterate)
	{
		if (flag)
			printf(", ");
		flag = 1;
		printf("'%s': '%s'", iterate->key, iterate->value);
		iterate = iterate->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: sorted hash table
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *iterate;
	int flag = 0;

	if (!ht)
		return;
	iterate = ht->stail;
	printf("{");
	while (iterate)
	{
		if (flag)
			printf(", ");
		flag = 1;
		printf("'%s': '%s'", iterate->key, iterate->value);
		iterate = iterate->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int compare;
	shash_node_t *iterate, *temp;

	if (!ht)
		return;
	for (compare = 0; compare < ht->size; compare++)
	{
		iterate = ht->array[compare];
		while (iterate)
		{
			free(iterate->key);
			free(iterate->value);
			temp = iterate;
			iterate = iterate->next;
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
