#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
int length = 0;
int start = 0;

while (s[length] != '\0')
{
length++;
}

int end = length - 1;
char temp;

while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;

start++;
end--;
}
}
