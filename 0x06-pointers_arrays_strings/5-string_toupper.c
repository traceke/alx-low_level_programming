#include "main.h"
/**
 * string_toupper - changes a string's lowercase letters to uppercase
 *
 * @c: string to be modified
 *
 * Return: return char var c
 */
char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] = c[i] - 32;
		}
		i++;
	}
	return (c);
}
