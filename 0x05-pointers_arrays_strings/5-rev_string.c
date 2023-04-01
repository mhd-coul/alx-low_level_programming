#include "main.h"

/**
 *rev_string - function that reverses a string
 *@s: string to be reversed
 *Return: 0
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char tmp;

	while (s[i] != '\0')
		len++;
	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
