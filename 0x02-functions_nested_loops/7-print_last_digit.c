#include "holberton.h"

/**
 * print_last_digit - prints last digit of a number
 * @k : int checked
 * Return: the value of the last digit
 */

int print_last_digit(int k)
{
long int lastd;
if (k < 0)
k = -k;
lastd = k % 10;
_putchar('0' + lastd);
return (lastd);
}
