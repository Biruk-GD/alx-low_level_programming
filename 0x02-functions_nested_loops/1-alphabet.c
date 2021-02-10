#include "holberton.h"


/**
 * print_alphabet - prints alphabet in lowercase
 * Return: always 0 (success)
 */

void print_alphabet(void)

{
char lc = 'a';
while (lc <= 'z')
{
_putchar(lc);
lc++;
}
_putchar('\n');
}
