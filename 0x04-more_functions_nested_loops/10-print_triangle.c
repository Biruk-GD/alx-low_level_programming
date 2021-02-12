#include "holberton.h"

/**
 * print_triangle - triangle of #
 * @size: checked
 * Return: always 0 (success)
 */

void print_triangle(int size)

{
int  c, r;
for (r = 1; r <= size; r++)
{
for (c = 1; c <= r; r--)
{
_putchar('#');
}
_putchar('\n');
}
}
