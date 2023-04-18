#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initializes a struct dog
* @d: pointer to a struct dog
* @name: pointer to a string representing the dog's name
* @age: float representing the dog's age
* @owner: pointer to a string representing the dog's owner's name
*
* Description: initializes a struct dog with the provided name, age, and owner.
* Return: Nothing
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
