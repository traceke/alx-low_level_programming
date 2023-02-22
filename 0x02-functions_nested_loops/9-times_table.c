#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: always 0
 */
void times_table(void)
{
	int a, b, prod, c, d;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			prod = a * b;
			if (prod > 9)
			{
				c = prod % 10;
				d = (prod - c) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(c + '0');

			}
			else
			{
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			_putchar(prod + '0');
			}
		}
		_putchar('\n');
	}
}
