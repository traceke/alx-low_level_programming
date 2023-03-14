#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - a  function that concatenates all argumments of the program
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int c = 0;
	int d = 0;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
			d++;
	}
	d += ac;

	a = malloc((d + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (i = 0 ; i < ac; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
		{
			a[c] = av[i][j];
			c++;
		}
		if (a[c] == '\0')
		{
			a[c++] = '\n';
		}
	}
	return (a);
}
