#include "main.h"

/**
 * swap_int - function that swap values
 * @a: value to be swap
 * @b: value to be swap
 * Return : 0;
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
