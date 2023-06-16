#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of
 * the number stored in the variable n
 *
 * Return: Always 0.
 */
int main(void)
{
  char last_digit;

  srand(time(0));
  int n = rand() - RAND_MAX / 2;
  last_digit = n % 10;

  if (last_digit > 5) {
    printf("the last digit of %d is %d and is greater than 5\n", n, last_digit);
  } else if (last_digit == 0) {
    printf("the last digit of %d is %d and is 0\n", n, last_digit);
  } else {
    printf("the last digit of %d is %d\n", n, last_digit);
  }

  return (0);
}
