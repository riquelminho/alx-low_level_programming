#include <stdlib.h>
#include "dog.h"

/**
 * struct dog - struct containing information about a dog
 * @name: pointer to a string representing the dog's name
 * @age: float representing the dog's age
 * @owner: pointer to a string representing the dog's owner's name
 *
 * Description: this struct contains information about a dog, including its name,
 * age, and owner's name.
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;
