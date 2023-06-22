#include "main.h"

/**
*print_diagonal - draws a diagonal line on the terminal.
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
int l, sp;
if (n > 0)
{
for (l = 0; l < n; l++)
{
for (sp = 0; sp < l; sp++)
{
_putchar('\\');
}
_putchar('l');
if (l == (n - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}

int main()
{
int n = 5;
print_diagonal(n);
return 0;
}
