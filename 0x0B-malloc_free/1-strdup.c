#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a gunction that returns a ponter to a newly allocated space
 * in memory that contains a copy of the string given as a parameter
 *
 * @str: string to be copied and diplicated in new memory space
 *
 * Return: returns a pointer to the duplicated string on success,
 * returns NULL if memory is insufficient
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *a;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	a = malloc(i * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (j = 0 ; str[j] ; j++)
		a[j] = str[j];

	return (a);
}
