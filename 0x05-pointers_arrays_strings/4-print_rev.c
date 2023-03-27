#include "main.h"

/**
 * print_rev - function that print string in reverse
 * @s: the string to reverse
 *Return: the reversed string
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
