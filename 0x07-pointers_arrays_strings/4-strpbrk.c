#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s : the pointer to the string to be searched
 * @accept : the pointer to the set of accepted bytes
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
