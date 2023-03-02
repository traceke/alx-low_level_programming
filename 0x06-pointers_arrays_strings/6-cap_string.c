#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 *
 * @c: the string to be capitalized
 *
 * Return: returns the string c
 */
char *cap_string(char *c)
{
	int index = 0;

	while (c[index])
	{
		while (!(c[index] >= 97 && c[index] <= 122))
			index++;

		if (c[index - 1] == 32 ||
		    c[index - 1] == '\t' ||
		    c[index - 1] == '\n' ||
		    c[index - 1] == 44 ||
		    c[index - 1] == 59 ||
		    c[index - 1] == 46 ||
		    c[index - 1] == 33 ||
		    c[index - 1] == 63 ||
		    c[index - 1] == 34 ||
		    c[index - 1] == 40 ||
		    c[index - 1] == 41 ||
		    c[index - 1] == 123 ||
		    c[index - 1] == 125 ||
		    index == 0)
			c[index] = c[index] - 32;

		index++;
	}

	return (c);
}
