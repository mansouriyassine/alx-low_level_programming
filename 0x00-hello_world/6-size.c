/*
 * File: 6-size.c
 * Auth: Yassine M
 */

#include <stdio.h>

/**
 * main - C program that prints the size of various types 
 *        base the computer it is compiled and run on..
 *
 * Return: Always 0.
 */
int main(void)
{
printf("Size of char: %lu byte(s)\n", sizeof(char));
printf("Size of int: %lu byte(s)\n", sizeof(int));
printf("Size of float: %lu byte(s)\n", sizeof(float));
printf("Size of double: %lu byte(s)\n", sizeof(double));
printf("Size of long: %lu byte(s)\n", sizeof(long));
printf("Size of long long: %lu byte(s)\n", sizeof(long long));

return (0);
}
