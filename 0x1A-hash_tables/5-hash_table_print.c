#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int compare;
	hash_node_t *iterate;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (compare = 0; compare < ht->size; compare++)
	{
		iterate = ht->array[compare];
		while (iterate)
		{
			if (flag)
				printf(" ,");
			flag = 1;
			printf("'%s': '%s'", iterate->key, iterate->value);
			iterate = iterate->next;
		}
	}
	printf("}\n");
}
