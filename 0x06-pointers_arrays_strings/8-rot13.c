#include "holberton.h"

/**
 * *rot13 - encodes a string using rot13.
 * @s : checked char
 * Return: always 0 (success)
 */

char *rot13(char *s)
{
	int i, j;

	char src[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dest[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (src[j] == *(s + i))
			{
				*(s + i) = dest[j];
				break;
			}
		}
	}
	return (s);
}
