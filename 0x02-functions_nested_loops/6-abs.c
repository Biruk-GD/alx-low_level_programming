#include "holberton.h"

/**
 * _abs - to compute the absolute value
 * @n : int checked
 * Return: the absolute value of a number
 */

int _abs(int n)

{
if (n < 0)
{
return (n * -1);
}
else
{
return (n);
}
}
