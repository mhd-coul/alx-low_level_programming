#include "main.h"

/**
 * print_triangle - function that print a triangle
 * @size : the height of the triangle
 * Return : always 0
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(' ');
		}
		for (j = size - i - 1; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
