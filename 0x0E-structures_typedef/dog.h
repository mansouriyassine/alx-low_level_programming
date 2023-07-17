#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Dog attributes
  * @name: The name of the dog.
  * @age: The age of the dog.
  * @owner: The owner of the dog.
  *
  * Description: The attributes of a dog.
  */
struct dog
{
char *name;
float age;
char *owner;
}
;

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

/**
 * init_dog - Initializes a dog structure with the given information.
 * @d: Pointer to the dog structure to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the attributes of a dog structure.
 * @d: Pointer to the dog structure to be printed.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog structure and returns a pointer to it.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Pointer to the newly created dog structure, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees the memory occupied by a dog structure.
 * @d: Pointer to the dog structure to be freed.
 */
void free_dog(dog_t *d);

#endif /* DOG_H */
