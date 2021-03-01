#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints file's name
 * @argc: number of arguments
 * @argv: an array of pointers to the strings which are thos arguments
 * Return: memory
 */

int main(int argc, char *argv[])
{
int i, mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
