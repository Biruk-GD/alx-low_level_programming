#include "holberton.h"

/**
 * print_square - square of #
 * @size: checked
 * Return: always 0 (success)
 */

void print_square(int size)

{
int  c, r;
for (c = 1; c <= size; c++)
{
for (r = 1; r <= size; r++)
{
_putchar('#');
}
_putchar('\n');
}
}

