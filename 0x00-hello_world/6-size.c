#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ld bytes(s)", sizeof(char));
	printf("Size of an int: %ld bytes(s)", sizeof(int));
	printf("Size of a long int: %ld bytes(s)", sizeof(long int));
	printf("Size of a long long int: %ld bytes(s)", sizeof(long long int));
	printf("Size of a float: %ld byte(s)", sizeof(float));
	return (0);
}

