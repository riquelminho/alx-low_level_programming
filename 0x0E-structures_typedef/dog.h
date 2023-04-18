#ifndef _HEADER_
#define _HEADER_

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

/**
* dog_t - Typedef for dog structure
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
