#include <stdio.h>
#include <math.h>

/**
* unsigned long - Prints largerst factor
* 
* Return : largest factor
*/
unsigned long largestPrimeFactor(unsigned long num)
{
unsigned long largestFactor = 0;
unsigned long i;
    
while (num % 2 == 0)
{
largestFactor = 2;
num = num / 2;
}
    
for (i = 3; i <= sqrt(num); i = i + 2)
{
while (num % i == 0) {
largestFactor = i;
num = num / i;
}
}
    
if (num > 2)
largestFactor = num;
    
return largestFactor;
}

int main(void)
{
unsigned long number = 612852475143;
unsigned long largestFactor = largestPrimeFactor(number);
    
printf("%lu\n", largestFactor);
    
return (0);
}
