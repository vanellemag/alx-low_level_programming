#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @a: char
 * Return:encoded string
 */
char *leet(char *a)
{
	int j, i;
	char c[] = "AaEeOoTtLl";
	char le[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	i = 0;
	while (*(a + i) != '\0')
	{
		j = 0;
		while (*(c + j) != '\0')
		{
			if (*(a + i) == *(c + j))
			{
				*(a + i) = *(le + j);
			}
			j++;
		}
		i++;
	}
	return (a);
}
