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
	int s1_len, s2_len, idx, i, j;
	char *newstr = malloc((sizeof(s1_len) + sizeof(s2_len)) + 1);;

	for (i = 0; s1[i]; i++)
        {
                s1_len++;
        }

	for (j = 0; s2[j]; j++)
        {
                s2_len++;
        }
	for (idx = 0; idx < s1_len; idx++)
	{
		newstr[idx] = s1[idx];
	}
	for (idx = 0; idx < s2_len; idx++)
        {
                newstr[idx + s1_len] = s2[idx];
        }
	newstr = malloc((sizeof(s1_len) + sizeof(s2_len)) + 1);
	if (newstr == NULL)
        {
                return (NULL);
        }
	newstr[s1_len + s2_len] = 0;
	return (newstr);
}
