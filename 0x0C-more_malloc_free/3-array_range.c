#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - values from  min to max
 * @min : checked int
 * @max : checked int
 *Return: 0
 */

int *array_range(int min, int max)
{
	unsigned int range, i;
	int *all;

	if (min > max)
	{
		return (NULL);
	}
	range = max - min + 1;
	all = malloc(sizeof(int) * (range + 1));
	if (all == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < range; i++)
	{
		all[i] = i + min;
	}
	return (all);
}
