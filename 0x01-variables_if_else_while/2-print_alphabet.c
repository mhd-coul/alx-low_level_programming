#include <stdio.h>

/**
 * main -Printing alphabet letter using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(letter);
		letter++;
	}
	printf("\n");
	return (0);
}


