#ifndef HOLBERTON_H
#include "holberton.h"
#endif
/**
 * main - entry point
 * Return: always 0 (success)
 */

void print_alphabet(void)

{
char x;

for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');

}
