#include "holberton.h"

/**
 * print_chessboard - chessboard
 * @a: A pointer to the memory area to be filled.
 * Return: memory
 */

void print_chessboard(char (*a)[8])

{
	int indx1, indx2;

	for (indx1 = 0; a[indx1][7]; indx1++)
	{
		for (indx2 = 0; indx2 < 8; indx2++)

			_putchar(a[indx1][indx2]);

		_putchar('\n');

	}
}
