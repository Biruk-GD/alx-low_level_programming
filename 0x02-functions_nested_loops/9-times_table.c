#include "holberton.h"

/**
 * times_table - multiplication table
 *
 * Return: A square of multiplication table
 */

void times_table(void)

{

int hor;
int ver;
for (ver = 0; ver <= 9; ver++)
{
for (hor = 0; hor <= 9; hor++)
{
_putchar((hor * 0));
_putchar(',');
_putchar((hor * 1));
_putchar(',');
_putchar((hor * 2));
_putchar(',');
_putchar((hor * 3));
_putchar(',');
_putchar((hor * 4));
_putchar(',');
_putchar((hor * 5));
_putchar(',');
_putchar((hor * 6));
_putchar(',');
_putchar((hor * 7));
_putchar(',');
_putchar((hor * 8));
_putchar(',');
_putchar((hor * 9));
_putchar(',');
_putchar('\n');
}
}
}
