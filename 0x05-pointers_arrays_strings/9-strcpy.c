#include "holberton.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: checked char
 * @src: checked char
 * Return: always 0 (success)
 */

char *_strcpy(char *dest, char *src)

{
int i;

i = 0;

while (src[i])
{
dest[i] = src[i];
i++;
}
return (dest);
}

