#include "main.h"

/**
 * _strncat - function that concatenate
 * @dest : input
 * @src : input
 * @n : lenght of the input src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen;
	int srclen;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destlen++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		srclen++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destlen + i] = src[i];
	}

	return (dest);
}
