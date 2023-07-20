#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Print a character.
 * @args: The va_list of arguments.
 */
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
 * print_integer - Print an integer.
 * @args: The va_list of arguments.
 */
void print_integer(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
 * print_float - Print a float.
 * @args: The va_list of arguments.
 */
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
 * print_string - Print a string.
 * @args: The va_list of arguments.
 */
void print_string(va_list args)
{
char *str = va_arg(args, char *);

if (str == NULL)
str = "(nil)";
printf("%s", str);
}

/**
 * print_all - Prints anything.
 * @format: List of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, j = 0;
char *separator = "";

void (*print_func[])(va_list) = {
print_char,
print_integer,
print_float,
print_string,
};

va_start(args, format);

while (format && format[i])
{
j = 0;
while (print_func[j])
{
if (format[i] == "cifs"[j])
{
printf("%s", separator);
print_func[j](args);
separator = ", ";
break;
}
j++;
}
i++;
}
printf("\n");
va_end(args);
}

