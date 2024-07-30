/**
 * print_dog - prints the elements of a struct
 *
 * @d: pointer to a struct
 * Return: null
 */
#include "dog.h"
void print_dog(struct dog *d)
{
if (d == NULL)
{
;
}
if (d->name == NULL)
{
printf("Name: (nil)");
}
printf("Name: %s\n", d->name);
if (d->age == 0)
{
printf("Age: (nil)");
}
printf("Age: %f\n", d->age);
if (d->owner == NULL)
{
printf("Owner: (nil)");
}
printf("Owner: %s\n", d->owner);
}
