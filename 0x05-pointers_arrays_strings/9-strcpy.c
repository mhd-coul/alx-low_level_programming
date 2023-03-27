#include "main.h"

/**
 * _strcpy - function that copies a string
 * @dest: destination
 * @src: source where to copy from
 * Return: copied dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
