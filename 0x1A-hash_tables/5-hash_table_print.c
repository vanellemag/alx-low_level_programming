#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{

	if (ht != NULL)
	{
		while (*(ht)->array != NULL)
		{
			for (i = 0; i < *(ht)->size; i++)
			{

				printf(*(ht)->array[i]);
			}
			*(ht)->array++;
		}
	}
}
