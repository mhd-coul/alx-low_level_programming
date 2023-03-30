#include "main.h"

/**
 * _strcmp - compare string
 * @s1 : stringd 1
 * @s2 : string 2
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
