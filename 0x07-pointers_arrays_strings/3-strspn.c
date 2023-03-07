#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 *
 * Return: the number of bytes in the inital segment of s, which only consist
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (*s)
	{
		for (j = 0 ; accept[j] ; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}

