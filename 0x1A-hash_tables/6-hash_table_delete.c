#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int compare;
	hash_node_t *iterate, *temp;

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
