#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 * @s1 : checked char
 * @s2 : checked char
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1, len2 = 0, index, index2;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
        {
                s2 = "";
        }
	len1 = 0;
	while (*(s1 + len1))
	{
		len1++;
	}
	len2++;
	while (*(s2 + len2))
        {
                len2++;
        }
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == 0)
	{
		return (0);
	}
	for (index = 0; index < len1; index++)
	{
		*(s + index) = *(s1 + index);
	}
	for (index2 = 0; index2 < len2; index2++, index++)
        {
                *(s + index) = *(s2 + index2);
        }
	*(s + (len1 + len2)) = '\0';
	return (s);
}
