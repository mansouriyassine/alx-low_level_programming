#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog structure and returns a pointer to it.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Pointer to the newly created dog structure, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
if (name == NULL || owner == NULL)
return (NULL);

dog_t *cutie_dog = malloc(sizeof(dog_t));
if (cutie_dog == NULL)
return (NULL);

int name_len = strlen(name);
int owner_len = strlen(owner);

cutie_dog->name = malloc(name_len + 1);
if (cutie_dog->name == NULL)
{
free(cutie_dog);
return (NULL);
}

cutie_dog->owner = malloc(owner_len + 1);
if (cutie_dog->owner == NULL)
{
free(cutie_dog->name);
free(cutie_dog);
return (NULL);
}

strcpy(cutie_dog->name, name);
strcpy(cutie_dog->owner, owner);
cutie_dog->age = age;

return (cutie_dog);
}
