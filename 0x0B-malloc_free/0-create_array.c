#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of char
 * @c : char to be created
 * @size: num of char to allocate
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
