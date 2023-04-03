#include "main.h"
#include <stdlib.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s : the pointer to the string to be searched
 * @accept : the pointer to the set of accepted char
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p = s;

	while (*p != '\0')
	{
		char *a = accept
			;
		while (*a != '\0')
		{
			if (*p == *a)
			{
				count++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			break;
		}
		p++;
	}
	return (count);

}
