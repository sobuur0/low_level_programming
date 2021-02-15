#include "holberton.h"

/**
 * swap_int - swap the values of two integers
 * *a,*b: pointers
 * Return: void
 */

void swap_int(int *a, int *b)
{
  int y = *a;
  *a = *b;
  *b = y;
}
