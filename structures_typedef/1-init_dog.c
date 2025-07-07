#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to dog struct to initialize
 * @name: Name to assign
 * @age: Age to assign
 * @owner: Owner to assign
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
