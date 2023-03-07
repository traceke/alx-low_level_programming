#include "main.h"
/**
 * _strstr - locates a substring by finding the first occurrence of
 * the substring needle in the string haystack.
 * @haystack: string haystack
 * @needle: substring needle
 *
 * Return: returns a pointer to the beginning of the located substring or;
 * NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}

	return (0);
}

