#include "holberton.h"

/**
 **_memcpy - assign memory location to n byte
 *@dest: A pointer to the memory area to be filled.
 *@src: The character to fill the memory area with.
 *@n: The number of bytes to be copied.
 *Return: memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int ln;

	for (ln = 0; ln < n; ln++)
	{
		dest[ln] = src[ln];
	}
	return (dest);
}
