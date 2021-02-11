#include "holberton.h"

/**
 * print_most_numbers - prints numbers fro 0 to 9 excluding 2 and 4
 * Return: always 0 (success)
 */

void print_most_numbers(void)

{
int num;

for (num = 0;num < 10; num++)
{
if (num == 2 || num == 4)
{
num++;
}
_putchar((num % 10) + '0');
}
_putchar('\n');
}
