#include "holberton.h"

/**
 * _islower - checks the lowercase character
 * @c: int checked
 * Return: always 0 (success)
 */


int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
_putchar('1');
}
else
{
_putchar('0');
}
return (0);
}
