#include "main.h"

/**
 * _isalpha- checks for alphabetic char
 * @c: is the char to be checked
 * Return: 1 if lower or Upper and 0 if not
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
