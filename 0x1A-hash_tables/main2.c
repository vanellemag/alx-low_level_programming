#include "hash_tables.h"
#include <string.h>
int main(void)
{
	char *s;
	unsigned long int hash_tables_array_size;

	hash_tables_array_size = 1024;
	s = "cisfun";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	printf("%lu\n", key_index((unsigned char *)s, hash_tables_array_size));
	s = "Don't forget to tweet today";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	printf("%lu\n", key_index((unsigned char *)s, hash_tables_array_size));
	s = "98";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	printf("%lu end\n", key_index((unsigned char *)s, hash_tables_array_size));
	return (EXIT_SUCCESS);
}
