#include "holberton.h"

/**
 * puts2 -  prints every other character of a string
 * @str: checked char
 * Return: always 0 (success)
 */

void puts2(char *str)
{
int i;
while (str[i] != '\0')
{
_putchar (str[i]);
i += 2;
}
_putchar ('\n');
}
