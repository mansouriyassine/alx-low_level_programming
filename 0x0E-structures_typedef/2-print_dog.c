#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints the attributes of a dog structure.
 * @d: Pointer to the dog structure to be printed.
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.1f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
