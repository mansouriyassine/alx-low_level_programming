#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog structure and returns
 * a pointer to it.
 *
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: (Pointer to the newly created dog structure),
 * or (NULL) on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

if (name == NULL || owner == NULL)
return (NULL);

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

new_dog->name = strdup(name);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}

new_dog->owner = strdup(owner);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}

new_dog->age = age;

return (new_dog);
}
