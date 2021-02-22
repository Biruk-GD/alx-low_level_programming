#include "holberton.h"

/**
 * _puts - function that prints a string
 * @str: checked int
 * Return: always 0 (success)
 */

void _puts(char *str)
{
int i;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar ('\n');
}
