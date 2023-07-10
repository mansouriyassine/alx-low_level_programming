#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: A pointer to the concatenated string,
 * or NULL if ac == 0 or av == NULL, or if it fails
 */
char *argstostr(int ac, char **av)
{
char *concat;
int i, len = 0, total_len = 0;
int arg_len;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
arg_len = 0;
while (av[i][arg_len] != '\0')
arg_len++;
total_len += arg_len + 1;
}

concat = malloc((total_len + 1) * sizeof(char));
if (concat == NULL)
return (NULL);

len = 0;
for (i = 0; i < ac; i++)
{
arg_len = 0;
while (av[i][arg_len] != '\0')
{
concat[len] = av[i][arg_len];
arg_len++;
len++;
}
concat[len] = '\n';
len++;
}
concat[len] = '\0';

return (concat);
}
