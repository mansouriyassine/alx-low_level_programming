#include "main.h"

/**
 * print_times_table - prints 10 times tables
 *
 *@n: the number in the input
 *
 * Return: nothing
 */
void print_times_table(int n)
{
int A, B, C;
  
if (n >= 0 && n <= 14)
}
 for (A = 0; A <= n; A++)
 {
 for (B = 0; B <= n; B++)
 {
 C = A * B;
        
 if (B != 0)
 {
 _putchar(',');
 _putchar(' ');
 }
        
if (C < 10 && B != 0)
{
_putchar(' ');
_putchar(' ');
}
else if (C < 100)
{
_putchar(' ');
}
        
if (C >= 100)
_putchar((C / 100) + '0');
        
if (C >= 10)
_putchar(((C / 10) % 10) + '0');
       
_putchar((C % 10) + '0');
}
     
_putchar('\n');
}
}
}
