#include "main.h"
/**
 * print_alphabet_x10 - a function that prints the alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char j = 'a';

	while (i <= 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

