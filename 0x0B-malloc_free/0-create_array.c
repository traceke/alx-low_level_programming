#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars and intializes it
 * with a specific char.
 *
 * @size: size of array
 * @c: char to assign
 *
 * Return: returns a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc(size * sizeof(char));
	if (size == 0 || a == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
	{
		a[i] = c;
	}
	return (a);

}
