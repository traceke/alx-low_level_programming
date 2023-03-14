#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - this function concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: returns pointer on succes, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *a;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		i++;
		j++;
	}
	a = malloc((i + j + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		a[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		a[i] = s2[j];
		i++;
		j++;
	}
	a[i] = '\0';
	return (a);
}
