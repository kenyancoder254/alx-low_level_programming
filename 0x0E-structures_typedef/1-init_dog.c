#include "dog.h"
/**
 * init_dog - initializes the dog's information
 *
 * @d: pointer to dog structure
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: null
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
