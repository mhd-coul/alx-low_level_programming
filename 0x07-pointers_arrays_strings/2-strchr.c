#include "main.h"
#include <stdlib.h>

/**
 * _strchr - function that locate a char in a string
 * @s : a pointer to the string to be searched
 * @c : the char to search for
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
