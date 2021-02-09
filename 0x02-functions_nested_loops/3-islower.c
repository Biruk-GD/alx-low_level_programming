#include "holberton.h"

/**
 * _islower - checks the lowercase character
 * @c: int checked
 * Return: always 0 (success)
 */


int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
