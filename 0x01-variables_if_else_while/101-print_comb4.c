#include <stdio.h>

/**
 * main -Task101 program that prints three digits comb
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				if (i != 7 || j != 9 || k != 0)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);

					if (i == 7 && j == 8 && k == 9)
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}

		}

	}
	putchar('\n');
	return (0);
}
