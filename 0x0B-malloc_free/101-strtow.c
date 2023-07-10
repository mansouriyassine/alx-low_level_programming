#include "main.h"
#include <stdlib.h>

int count_words(char *str);
int word_length(char *str);
void free_words(char **words, int word_count);

/**
 * strtow - Splits a string into words.
 * @str: The string to be split
 *
 * Return: A pointer to an array of strings (words), or NULL if str is NULL or str is ""
 */
char **strtow(char *str)
{
char **words;
int word_count, i, j, k, len;

if (str == NULL || str[0] == '\0')
return (NULL);

word_count = count_words(str);

words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

i = 0;
j = 0;
while (str[i] != '\0' && j < word_count)
{
if (str[i] == ' ')
i++;
else
{
len = word_length(&str[i]);
words[j] = malloc((len + 1) * sizeof(char));
if (words[j] == NULL)
{
free_words(words, j);
return (NULL);
}
for (k = 0; k < len; k++)
{
words[j][k] = str[i];
i++;
}
words[j][k] = '\0';
j++;
}
}
words[j] = NULL;

return (words);
}

int count_words(char *str)
{
int count = 0;
int i = 0;

while (str[i] != '\0')
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;
i++;
}

return (count);
}

int word_length(char *str)
{
int length = 0;

while (str[length] != ' ' && str[length] != '\0')
length++;

return (length);
}

void free_words(char **words, int word_count)
{
int i;

for (i = 0; i < word_count; i++)
free(words[i]);

free(words);
}
