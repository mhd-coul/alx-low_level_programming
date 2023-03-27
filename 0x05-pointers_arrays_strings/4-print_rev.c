#include "main.h"

/**
 * print_rev - function that print string in reverse
 * @s: the string to reverse
 *Return: the reversed string
 */

void print_rev(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
