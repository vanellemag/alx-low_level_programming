#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: dog_t
 *
 */
void free_dog(dog_t *d);
void free_dog(dog_t *d)
{
	free(d);
}
