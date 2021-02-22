#include "holberton.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: checked char
 * Return: always 0 (success)
 */

void print_rev(char *s)
{
int i, all;
while (s[i] != '\0')
{
i++;
}
for (all = i; all >= 0; all--)
{
_putchar(s[all]);
}
_putchar ('\n');
}
