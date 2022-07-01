#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 * Return: 1 success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/*unsigned long int key1;*/
	hash_node_t *new;

	/*key1 = key_index((unsigned char *)key, 1024);*/
	if ((*(ht)->array)->key == key)
	{
		if ((*(ht)->array)->value != NULL)
		{
			(*(ht)->array)->value = value;
		}
		else
		{
			*(new)->key = *key;
			*(new)->value = value;
			*(new)->next = *(ht)->array;
		}
	}
	return (1);
}
