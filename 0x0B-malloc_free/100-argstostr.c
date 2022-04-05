#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: int
 * @av: char
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i;
	char **s, *c;

	c = "\n";
	s = malloc(ac * sizeof(char));
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < ac; i++)
		{
			s[i] = av[i] + *c;
		}
	}
	if (s != NULL)
		return (*s);
	else
		return (NULL);
}
