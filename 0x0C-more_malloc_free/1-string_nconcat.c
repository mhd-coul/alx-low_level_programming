#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concat 2 strings
 * @s1: string1
 * @s2: string2
 *@n: number of bytes to allocate
 * Return: result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len = s1 ? strlen(s1) : 0;
	unsigned int s2_len = s2 ? strlen(s2) : 0;

	if (n >= s2_len)
		n = s2_len;

	result = malloc(s1_len + n + 1);
	if (result == NULL)
		return (NULL);

	if (s1)
		strcpy(result, s1);
	if (n > 0 && s2)
		strncat(result + s1_len, s2, n);

	result[s1_len + n] = '\0';

	return (result);
}
