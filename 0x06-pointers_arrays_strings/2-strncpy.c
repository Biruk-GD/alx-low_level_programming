#include "holberton.h"

/**
 * *_strncpy - Write a function that copies a string.
 * @dest:  checked char
 * @src:  checked char
 * @n : checked int
 * Return: always 0 (success)
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
