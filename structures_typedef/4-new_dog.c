#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - Copies a string
 * @dest: Destination buffer
 * @src: Source string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}

/**
 * _strlen - Calculates the length of a string
 * @s: Input string
 * Return: Length of the string
 */
int _strlen(char *s)
{
int length;
for (length = 0; s[length] != '\0'; length++)
{
}
return (length);
}

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to new dog_t structure, NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *second_dog;
if (name == NULL || owner == NULL)
return (NULL);

second_dog = malloc(sizeof(dog_t));
if (second_dog == NULL)
return (NULL);

second_dog->name = malloc(_strlen(name) + 1);
if (second_dog->name == NULL)
{
free(second_dog);
return (NULL);
}

second_dog->owner = malloc(_strlen(owner) + 1);
if (second_dog->owner == NULL)
{
free(second_dog->name);
free(second_dog);
return (NULL);
}

_strcpy(second_dog->name, name);
second_dog->age = age;
_strcpy(second_dog->owner, owner);

return (second_dog);
}
