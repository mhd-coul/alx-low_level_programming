#include <stdio.h>

/**
 * main -Task8 print all hex num
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;
	char c;

	while (n < 10)
	{
		putchar(n + 48);
		n++;
	}

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
