#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * get_op_func -  selects correct function
 * @s: char
 * Return: correct function
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;
	while (i < 6)
	{
		if ((ops[i]).op == s)
			return ((ops[i]).f);
		i++;
	}
	return (0);
}
