#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 * @a : checked int
 * @b : checked int
 * Return: always 0 (success)
 */

void swap_int(int *a, int *b)
{
int t = *a;
*a = *b;
*b = t;
}
