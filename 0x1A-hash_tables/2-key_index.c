#include "hash_tables.h"
/**
 * key_index - function that gives the index of a key
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: index at which key/value pair should be stored in array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int n = hash_djb2((unsigned char *)key);

	return (n % size);
}
