#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: always returns 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			if (i < j && i != j)
			{	putchar(i + '0');
				putchar(j + '0');
				if (j + i != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
