#ifndef _DOG_H_
#define _DOG_H_
#include <stdio.h>
/**
 * struct dog - new type
 * @name: char
 * @age: float
 * @owner: char
 * define a new type struct dog eith the elements
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif /*_DOG_H_*/
