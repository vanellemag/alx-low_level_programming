#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * *rot13 - encodes a string using rot13
 * @a: char
 * Return: encodes string
 */
char *rot13(char *a)
{
	char *resp = malloc(strlen(a));

	if (resp != NULL)
	{
		strcpy(resp, a);
		char *cur = resp;

		while (*cur != '\0')
		{
			if ((*cur >= 97 && *cur <= 122) || (*cur >= 65 && *cur <= 90))
			{
				if (*cur >= 109 || (*cur > 77 && *cur < 91))
				{
					*cur -= 13;
				}
				else
				{
					*cur += 13;
				}
			}
			cur++;
		}
	}
	strcpy(a, resp);
	return (resp);
}
