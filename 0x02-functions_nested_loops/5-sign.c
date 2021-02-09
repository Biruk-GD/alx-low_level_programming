#include "holberton.h"

/**
 * print_sign - to print the sign of a number
 * @n: int checked
 * Return: 1 and + if positive, 0 if zero and -1 and - if negative
 */

int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}

}
