#include "hash_tables.h"

/**
 * key_index - Retrieves the index of a key in a hash table.
 * @key: The key to look up.
 * @size: The size of the hash table's array.
 *
 * Return: The index at which the key/value pair
 * should be stored in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value;

if (size == 0 || key == NULL)
return (0);

hash_value = hash_djb2(key);
return (hash_value % size);
}
