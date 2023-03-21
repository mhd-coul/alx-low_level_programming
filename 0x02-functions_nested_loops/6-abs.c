#include "main.h"

/**
 * _abs - computes the absolute value of an intert
 *@n: the value to be computed
 * Return: absolute value of an integer
 */
int _abs(int n)
{
	int val_abs;

	if (n < 0)
	{
		val_abs = n * -1;
		return (val_abs);
	}
	return (n);
}
