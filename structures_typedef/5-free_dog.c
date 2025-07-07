#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a dog_t structure
 * @d: Pointer to dog_t structure to free
 *
 * Description: Safely frees the name, owner, and the structure itself.
 *              Does nothing if the pointer is NULL.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
