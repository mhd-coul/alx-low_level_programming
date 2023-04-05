#include "main.h"

/**
 * factorial(int n)- function that return a ! of a given number
 * @n : ! to be return
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
