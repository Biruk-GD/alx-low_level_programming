#include "holberton.h"

/**
 * _isdigit - returns 1 if c is a digit
 * @c : int chechked
 * Return: Always 0.
 */

int _isdigit(int c)
{
if (c > 47 && c < 59)
return (1);
else
return (0);
}
