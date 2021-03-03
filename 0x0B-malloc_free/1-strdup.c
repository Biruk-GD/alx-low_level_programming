#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initialize
 * @size: checked int
 * @c : checked char
 * Return: 0
 */

char *_strdup(char *str)
{
	int n = 0;
	char *dup;
	char *p;

	dup = (char *)malloc (sizeof(char)*(n + 1));

	if (str == NULL || dup == NULL)
	{
		return (NULL);
	}
	while (str[n])
	{
		n++;
		p = dup;
	}
	while (*str)
	{
		*p++ = *str++;
	}
	*p = '\0';
	return (dup);
}

