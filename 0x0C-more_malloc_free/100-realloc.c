#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 *
 * @ptr: Pointer to the memory block to be reallocated
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the memory block
 *
 * Return: Pointer to the reallocated memory block
 * If new_size is equal to zero, returns NULL
 * If malloc fails to allocate memory, returns NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int min_size, i;
char *src, *dest;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
return (malloc(new_size));

if (new_size == 0)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);

if (new_ptr == NULL)
return (NULL);

min_size = old_size < new_size ? old_size : new_size;

src = ptr;
dest = new_ptr;

for (i = 0; i < min_size; i++)
dest[i] = src[i];

free(ptr);

return (new_ptr);
}
