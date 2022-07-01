#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated
 * with a key
 * @ht: hash table
 * @key: key we are looking for
 * Return: value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	while (ht->array != NULL)
	{
		if ((*(ht)->array)->key == key)
		{
			return ((*(ht)->array)->value);
		}
		*(ht)->array = (*(ht)->array)->next;
	}
	return (NULL);
}
