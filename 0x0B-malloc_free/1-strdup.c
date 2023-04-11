#include "main.h"
#include <stdlib.h>

/**
 * _strdup - func that ret a ptr to a new memory
 * @str: string to duplicate
 *
 * Return: dup
 */

char *_strdup(char *str)
{
	char *dup;
	int len, i;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
	{

	}

	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}

	dup[len] = '\0';

	return (dup);

}
