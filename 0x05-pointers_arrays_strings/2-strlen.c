#include "main.h"
/**
 * _strlen - returns the lenght of a string
 *
 * @s: string whose length is returned
 *
 * Return: returns string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
