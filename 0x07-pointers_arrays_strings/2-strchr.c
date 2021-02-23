#include "holberton.h"

/**
 * *_strchr - locates a character in a string.
 * @s: A pointer to the memory area to be filled.
 * @c: cheched char
 * Return: memory
 */

char *_strchr(char *s, char c)

{
	int ln = 0;

	while  (s[ln] >= '\0')
	{
		ln++;

		if (s[ln] == c)

			return (s + ln);
	}
	return ('\0');
}
