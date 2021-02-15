#include "holberton.h"

/**
 * swap_int - swap the values of two integers
 * @a: pointer1
 * @b: pointer2
 * Return: void
 */

void swap_int(int *a, int *b)
{
  int y = *a;
  *a = *b;
  *b = y;
}
