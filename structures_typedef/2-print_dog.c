#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the contents of a dog struct
 * @d: Pointer to dog struct to print
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
printf("Name: %s\n", d->name);

printf("Age: %f\n", d->age);

if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
else
printf("Owner: %s\n", d->owner);
}
