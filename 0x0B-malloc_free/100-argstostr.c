#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: arguments
 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int j;
	int k;
	int *p = NULL;
	int l;
	int ext;

	l = 0;
	ext = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			ext++;
		}
	}

	p = (char *)malloc(ext + ac + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			p[l] = av[j][k];
			l++;
		}
		p[l] = '\n';
		l++;
	}
	p[l] = '\0';
	return (p);
}
