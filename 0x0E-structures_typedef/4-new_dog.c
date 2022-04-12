#include <stdio.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: NULL failled
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	typedef dog_t *d;

	(*d).name = *name;
	(*d).age = age;
	(*d).owner = *owner;
	return (NULL);
}
