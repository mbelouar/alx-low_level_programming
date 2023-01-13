#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Function create and array of integers.
 * @min: starting number.
 * @max: ending number.
 *
 * Return: pointer to the area in memory.
 */

int *array_range(int min, int max)
{
	int *arr;
	int b;

	if (min > max)
		return (NULL);
	b = max - min;

	arr = malloc(sizeof(int) * (b + 1));
	if (!arr)
		return (NULL);
	while (max > min)
	{
		arr[b] = max;
		b--;
		max--;
	}
	arr[b] = min;
	return (arr);
}

