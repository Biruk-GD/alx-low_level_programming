#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initialize
 * @size: checked int
 * @c : checked char
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc((size + i) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';
	return (s);
}
