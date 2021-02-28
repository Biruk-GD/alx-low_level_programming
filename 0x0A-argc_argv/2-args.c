#include <stdio.h>

/**
 * main - prints file's name
 * @argc: number of arguments
 * @argv: an array of pointers to the strings which are thos arguments
 * Return: memory
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
