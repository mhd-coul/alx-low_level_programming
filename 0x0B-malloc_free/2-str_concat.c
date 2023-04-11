#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concat_str
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i, j;
	char *concat_str;

	if (s1 == NULL)
		len1 = 0;
	else
		for (len1 = 0; s1[len1]; len1++)
			;

	if (s2 == NULL)
		len2 = 0;
	else
		for (len2 = 0; s2[len2]; len2++)
			;

	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat_str[i + j] = s2[j];

	concat_str[i + j] = '\0';

	return (concat_str);
}
