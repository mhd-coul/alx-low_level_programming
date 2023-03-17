#include <stdio.h>

/**
 * main -Task3 alphabet in uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'a';
	int i;
	int j;

	for (i = 0; i < 26; i++)
	{
		for (j = 0; j < 26; j++)
		{
			putchar(letter);
			letter++;
		}


		putchar(letter + 32);
		letter++;
	}
	return (0);
}

