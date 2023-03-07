#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string s
 * @accept: atring accept
 *
 * Return: returns a pointer to the byte in s that matches a byte in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
	s++;
	}

	return ('\0');
}

