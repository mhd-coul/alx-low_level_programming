#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name using point to func
 * @name : strinf to add
 * @f: poin to function
 * Return : 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);

}
