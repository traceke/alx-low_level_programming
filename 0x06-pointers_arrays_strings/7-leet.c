#include "main.h"
/**
 * leet - encodes a string into 1337
 *
 * @c: string to be encoded
 *
 * Return: c value
 */
char *leet(char *c)
{
	int i;
	int j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == s1[j])
			{
				c[i] = s2[j];
			}
		}
	}
	return (c);
}

