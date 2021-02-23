#include "holberton.h"

/**
 * *_strncat - Concatenates two strings.
 * @dest:  checked char
 * @src:  checked char
 * @n : checked int
 * Return: always 0 (success)
 */

char *_strncat(char *dest, char *src, int n)

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
	while (*(src + i) != src[n])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
