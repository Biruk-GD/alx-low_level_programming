#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: checked char
 * Return: always 0 (success)
 */

int _strlen(char *s)
{
int i;
while (s[i] != '\0')
{
i++;
}
return (i);
}
