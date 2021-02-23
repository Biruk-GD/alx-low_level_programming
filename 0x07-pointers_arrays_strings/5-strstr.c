#include "holberton.h"

/**
 * *_strstr - function that locates a substring.
 * @haystack: A pointer
 * @needle: cheched char
 * Return: memory
 */

char *_strstr(char *haystack, char *needle)
{
int ln;

if (*needle == 0)
	return (haystack);

while (*haystack)
{
	ln = 0;

	if (haystack[ln] == needle[ln])
	{
		do {
			if (needle[ln + 1] == '\0')
				return (haystack);
			ln++;
		} while (haystack[ln] == needle[ln]);
	}
	haystack++;
}
return ('\0');
}
