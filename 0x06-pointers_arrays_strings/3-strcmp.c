#include "main.h"
/**
 * _strcmp - comparison of two strings.
 *
 * @s1: first sring
 *
 * @s2: second string
 *
 * Return: returns 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[1] != s2[1])
		{
			return (s1[1] - s2[1]);
		}
		i++;
	}
	return (0);
}
