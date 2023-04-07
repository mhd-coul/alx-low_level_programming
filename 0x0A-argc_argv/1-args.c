#include "main.h"
#include <stdio.h>

/**
 * main - prints its name
 * @argc: num of agr passed to the function
 * @argv: array of string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
