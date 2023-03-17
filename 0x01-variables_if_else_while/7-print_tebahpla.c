#include <stdio.h>

/**
 * main -Task7 write reverse alphabet
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
		{
		putchar(rev);
		}
		putchar('\n');
		return (0);
}
