#include "holberton.h"
#include "1-alphabet.c"

/**
 * print_alphabet_x10 - the alpahbets repeated in 10 lines
 *
 * Return: always 0 (success)
 */

void print_alphabet_x10(void)
{

int line;

for (line = 0; line <= 10; line++)

{
print_alphabet();
}
}
