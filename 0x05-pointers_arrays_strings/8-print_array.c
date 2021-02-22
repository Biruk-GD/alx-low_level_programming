#include "holberton.h"
#include "stdio.h"

/**
 * print_array -  prints n elements of an array of integers,
 * @a: checked int
 * @n: checked int
 * Return: always 0 (success)
 */

void print_array(int *a, int n)
{
if (a)
{

int i = 0;

while (i < n)
{
printf("%d", a[i]);
if (i <= (n - 1))
{
printf(",");
printf(" ");
}
i++;
}
}
printf("\n");
}

