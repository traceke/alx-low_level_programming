#include "main.h"
/**
 * rev_string - a function that reverses a string
 *
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char c;

	while (s[i++])
		j++;

	for (i = j - 1 ; i >= j / 2 ; i--)
	{
		c = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = c;
	}
}
