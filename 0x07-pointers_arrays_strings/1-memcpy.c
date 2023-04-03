#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest : destionation
 * @src : source
 * @n : byte
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}
	return (dest);
}
