#include "holberton.h"

/**
 * more_numbers - 10times the number from 0 to 14
 *
 * Return: always 0 (success)
 */
void more_numbers(void)
{

int line;
int num;

for (line = 0; line < 10; line++)
{
while (num <= 14)
{
_putchar(num);
num++;
}
}
_putchar('\n');
}
