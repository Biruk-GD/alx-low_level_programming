#include "holberton.h"

/**
 * *_strcat - function appends the src string to the dest string
 * @dest:  checked char
 * @src:  checked char
 * Return: always 0 (success)
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
j = 0;

while (*(dest + i) != '\0')
{
i++;
j++;
}
i = 0;
while (*(src + i) != '\0')
{
dest[j] = src[i];
i++;
j++;
}
dest[j] = '\0';

return (dest);
}
