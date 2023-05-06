#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing a binary number
 *
 * Return: the converted number, or 0 if there is an invalid char in the string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		num <<= 1;
		num += (*b - '0');
		b++;
	}

	return (num);
}

