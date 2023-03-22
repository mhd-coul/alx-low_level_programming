#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int product;
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					if (product < 10)
					{
						_putchar(' ');
					}
				}
				if (product < 10)
				{
					_putchar('0' + product);
				}
				else
				{
					_putchar('0' + product / 10);
					_putchar('0' + product % 10);
				}
		}
		_putchar('\n');
	}
}
