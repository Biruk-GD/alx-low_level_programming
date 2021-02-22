#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: checked char
 * Return: always 0 (success)
 */

void puts_half(char *str)
{
int i,n;
while (str[i] != '\0')
{
i++;
}
n = i / 2;
while (n <= i)
{
_putchar(str[n]);
n++;
}
_putchar ('\n');
}
