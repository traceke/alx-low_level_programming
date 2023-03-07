#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string s
 * @c: character c
 *
 * Return: returns the first occurence of the charcter in c or s or NULL
 * if the charcter is not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

