#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints file's name
 * @argc: number of arguments
 * @argv: an array of pointers to the strings which are thos arguments
 * Return: memory
 */

int main(int argc, char  *argv[])
{
        int num, num2, sum;

        for (num = 1; num < argc; num++)
        {
                for (num2 = 0; argv[num][num2]; num2++)
                {
                        if (argv[num][num2] < '0' || argv[num][num2] > '9')
                        {

				printf("Error\n");
				return (1);
                        }
                }
                sum += atoi(argv[num]);
        }
        printf("%d\n", sum);

        return (0);
}
