#include "main.h"

/**
 * _strcat : function that concatenate 2 strings
 * @dest : the destination
 * @src: the source
 * Return: the concatenate
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
