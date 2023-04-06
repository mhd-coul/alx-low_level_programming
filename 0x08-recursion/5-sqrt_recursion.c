#include "main.h"
#include <stdio.h>

int _sqrt_recursion_helper(int n, int start, int end)
/**
 * _sqrt_recursion - function that return square root
 * @n: num to be sqare root
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_recursion_helper(n, 1, n));

}

/**
 * _sqrt_recursion_helper - function that perform the recursion
 * @n: The number to square
 * @start: the start of the range to search for the square root
 * @end: the end of the range to search for the square root
 * Return: the square root
 */

int _sqrt_recursion_helper(int n, int start, int end)
{
	if (start > end)
	{
		return (end);
	}
	int mid = (start + end) / 2;

	if (mid * mid < n)
	{
		return (mid);
	}
	if (mid * mid < n)
	{
		return (_sqrt_recursion_helper(n, mid + 1, end));
	}
	else
	{
		return (_sqrt_recursion_helper(n, start, mid - 1));
	}
}
