#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that create an array of int
 * @min: min range
 * @max: max range
 *
 * Return: arr
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	arr = malloc(len * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
