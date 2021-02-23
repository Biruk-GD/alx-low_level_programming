#include "holberton.h"

/**
 * _strcmp - function that compares two strings
 * @s1:  checked char
 * @s2:  checked char
 * Return: always 0 (success)
 */

int _strcmp(char *s1, char *s2)
{
	int i, output;

	i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s2 + i) && *(s1 + i) != '\0')
		i++;
	output = (*(s1 + i) - *(s2 + i));
	return (output);
}
