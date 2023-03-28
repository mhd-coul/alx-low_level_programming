#include "main.h"

/**
 *puts_half - function that print a half of a string
 *@str: string to process
 *Return: 0
 */

void puts_half(char *str)
{
	int i;
	int length = 0;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 1)
	{
		i = ((length - 1) / 2);
		     i += 1;
	}
	else
	{
		i = length / 2;
	}

	for (; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
