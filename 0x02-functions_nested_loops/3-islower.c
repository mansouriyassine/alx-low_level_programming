#include "main.h"

/**
 * _islower - return 1 if lowercase and 0 otherwise
 *
 * @c: to check 
 * Return : 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
