#include "main.h"

/**
 *puts2 - function that print other char of a string
 *@str: str to be printed
 *Return: 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
