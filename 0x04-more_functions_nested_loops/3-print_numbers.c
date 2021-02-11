#include "holberton.h"

/**
 * print_numbers - prints numbers fro 0 to 9
 * Return: always 0 (success)
 */

void print_numbers(void)

{
int num;
for (num = 0; num < 10; num++)
{
_putchar((num % 10) + '0');
}
_putchar('\n');

}
