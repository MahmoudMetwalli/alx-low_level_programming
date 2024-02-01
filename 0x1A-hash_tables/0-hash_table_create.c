#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of table
 * Return: a pointer to the newly created hash table or NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **Hash_array;
	hash_table_t *Hash_T;

	Hash_array = malloc(sizeof(hash_node_t) * (size + 1));
	if (!Hash_array)
		return (NULL);
	Hash_T = malloc(sizeof(hash_table_t));
	if (!Hash_T)
		return (NULL);
	Hash_T->size = size;
	Hash_T->array = Hash_array;
	return (Hash_T);
}
