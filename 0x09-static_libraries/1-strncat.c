#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - strncat
 * @dest : copy to
 * @src : copy from
 * @n: int n
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
