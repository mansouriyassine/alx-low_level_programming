#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a given name using a function pointer.
 * @name: Pointer to the name to be printed.
 * @f: Function pointer that points to a function that takes
 * a char pointer and returns void.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
