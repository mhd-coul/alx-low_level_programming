#include <stdio.h>

/**
 * main - Task101 program that prints combinations of three digits.
 *
 * Return: Always 0 (Success)
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
                if (i != 7 || j != 8 || k != 9)
                {
                    putchar(i + '0');
                    putchar(j + '0');
                    putchar(k + '0');
                    putchar(',');
                    putchar(' ');
                }
                else
                {
                    putchar(i + '0');
                    putchar(j + '0');
                    putchar(k + '0');
                    putchar('\n');
                }
            }
        }
    }

    return (0);
}

