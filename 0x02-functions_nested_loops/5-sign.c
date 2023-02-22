#include "main.h"
/**
 * print_sign - this funnction prints the sign of a number.
 *
 * @n: this is the number whose sign will be printed.
 *
 * Return: returns 1(if n>0), returns 0(if n=0), returns -1(if n<0)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
