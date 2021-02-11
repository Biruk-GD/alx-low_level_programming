#include "holberton.h"


/**
 * print_line - draw line with _
 * @n: int checked
 * Return: always 0 (success)
 */

void print_line(int n)

{
if (n > 0)
{
_putchar('_');
n--;
}
else if (n <=0 )
{
_putchar('\n');
}
}
