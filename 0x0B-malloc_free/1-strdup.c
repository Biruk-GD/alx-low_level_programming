#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * @str : checked pointer
 * Return: 0
 */

char *_strdup(char *str)
{
	int n = 0;
	char *dup;
	char *p;

	dup = (char *)malloc(sizeof(char) * (n + 1));

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

