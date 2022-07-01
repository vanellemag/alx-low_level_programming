#include "hash_tables.h"
/**
 * hash_table_create - function
 * that creates a hash table
 * @size: size of the array
 * Description: creates a hash table
 * Return: pointer to the newly hash table or Null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;

	hashTable = malloc(sizeof(hash_table_t));
	if (size != 0 || hashTable != NULL)
	{
		hashTable->size = size;
	}
	else
	{
		return (NULL);
	}
	return (hashTable);
}
