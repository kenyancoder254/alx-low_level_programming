#include "dog.h"
/**
 * new_dog - creates a new dog
 *
 * @name: name of dog
 * @age: age of the dog
 * @owner: name of owner
 * Return: NUll on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *d;
d = malloc(sizeof(struct dog));
if (d == NULL)
{
return (NULL);
}
d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
