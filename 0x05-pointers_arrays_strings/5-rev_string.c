#include "holberton.h"

/**
 * rev_string - function that reverses a string.
 * @s: checked char
 * Return: always 0 (success)
 */


int _strlen(char *s)
{
int i, len;
len = 0;

for (i = 0; s[i] != '\0'; ++i)
{
len++;
}
return (len);
}

void rev_string(char *s)
{
int strsize = _strlen(s);
int i;
char c;

i = 0;

while (i < (strsize / 2))
{
c = *(s + i);
*(s + i) = *(s + strsize - 1 - i);
*(s + strsize - 1 - i) = c;
i++;
}
}

