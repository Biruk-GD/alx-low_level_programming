#include "holberton.h"

/**
 * *_strpbrk - gets the length of a prefix substring.
 * @s: A pointer
 * @accept: a string
 * Return: memory
 */

char *_strpbrk(char *s, char *accept)
{
	int ln;

	while (*s)
	{
		for (ln = 0; accept[ln]; ln++)
		{
			if (*s == accept[ln])
				return (s);
		}
		s++;
	}
	return ('\0');
}
