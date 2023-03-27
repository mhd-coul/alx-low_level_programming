#include "main.h"
#include <stddef.h>
/**
 * _strcpy - function that copies a string
 * @dest: destination
 * @src: source where to copy from
 * Return: copied dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
