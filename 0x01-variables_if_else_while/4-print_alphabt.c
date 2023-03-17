#include <stdio.h>

/**
 * main -Task4 printing alphabet without q and e
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'q' && letter != 'e')

			{
			putchar(letter);
			}

	printf("\n");
	return (0);
}
