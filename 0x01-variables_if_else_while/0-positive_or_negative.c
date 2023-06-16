#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print whether the number stored in the variable
 *        n is positive or negative        
 *
 * Return: Always 0.
 */

int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  printf("the number is %d\n", n);

  if (n > 0) {
    printf("is positive\n");
  } else if (n == 0) {
    printf("is zero\n");
  } else {
    printf("is negative\n");
  }

  return (0);
}
