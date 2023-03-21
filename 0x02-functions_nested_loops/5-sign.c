#include "main.h"

/**
 * print_sign - print a sign of a number
 * @n: the number to be checker
 * Return: 1 for positive number -1 for negative number and 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	_putchar(48);
	return (0);
}
