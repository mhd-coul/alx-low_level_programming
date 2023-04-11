#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac : int
 * @av: double pointer
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + ac + 1));
	if (str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k++] = av[i][j];

		}
		str[k++] = '\n';
	}
	str[k++] = '\0';

	return (str);
}
