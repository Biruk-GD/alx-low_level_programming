#include "holberton.h"

/**
 * _isalpha - checksif the character is alphabet
 * @c : int checked
 * Return: 1 if letter and 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
