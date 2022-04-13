#ifndef _3_CALC_H_
#define _3_CALC_H_
#include "function_pointers.h"
#include <stddef.h>
/**
 * struct op - struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
#endif /*_3_CALC_H_*/
