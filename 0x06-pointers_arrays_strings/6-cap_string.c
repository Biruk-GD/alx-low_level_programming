#include "holberton.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s : checked char
 * Return: always 0 (success)
 */

char *cap_string(char *s)
{
	int i, j, separatorFound;

	separatorFound = 1;

	for (i = 0; s[i]; ++i)
	{
		if (separatorFound && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] -  32;
		}
		separatorFound = 0;
		for (j = 0; j < 12; j++)
		{
			if (s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
s[i] == '\"' || s[i] == '.' || s[i] == '!' ||
s[i] == '{' || s[i] == '}' || s[i] == '(' ||
s[i] == ')' || s[i] == ' ' || s[i] == '?')
			{
				separatorFound = 1;
			}
		}
	}
	return (s);
}
