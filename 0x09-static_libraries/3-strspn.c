#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - strspn
 * @s: char s
 * @accept : char accept
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
