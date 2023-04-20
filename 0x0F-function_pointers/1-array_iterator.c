#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array elmt on a \n
 * @action: pointer to print
 * @array : arr to work on
 * @size :size of the arr
 * Return : void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

