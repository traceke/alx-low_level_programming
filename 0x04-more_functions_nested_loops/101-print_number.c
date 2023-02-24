#include "main.h"
/**
 * print_number - prints only integers
 *
 * @n: the integer to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n = n * -1;
	}
	if (n != 0 && (n / 10) >= 1)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}

