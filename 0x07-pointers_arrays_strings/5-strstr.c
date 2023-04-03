#include "main.h"
#include <stdlib.h>

/**
 * _strstr - function that locates a substring
 * @haystack : a pointer to a string to be searched
 * @needle : a pointer to a substring to be found
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
