#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: parameter
 *
 * Return: always 0
 */
void print_times_table(int n)
{
	int a, b, prod, c, d;

	if (n < 15 && n >= 0)
	{
		for (a = 0 ; a <= n ; a++)
		{
			for (b = 0 ; b <= n ; b++)
			{
				prod = a * b;
				c = prod % 10;
				d = (prod / 10) % 10;
				if (b == 0)
					_putchar('0');
				else if (prod < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else if (prod >= 10 && prod < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(d + '0');
					_putchar(c + '0');
				}
				else if (prod > 99 && prod < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(prod / 100 + '0');
					_putchar(d + '0');
					_putchar(c + '0');
				}
			}
			_putchar('\n');
		}
	}
}
