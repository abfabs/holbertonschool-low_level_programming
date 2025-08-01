#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure that stores information about a dog
 * @name: Name of the dog (as a string)
 * @age: Age of the dog (as a float)
 * @owner: Name of the dog's owner (as a string)
 *
 * Description: Defines a struct to hold a dog's name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
