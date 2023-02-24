#include <stdio.h>
/**
 * main - this program finds and prints the largest prime factor of
 * the number 612852475143, then a new line.
 *
 * Return: returns 0 (success)
 */
int main(void)
{
	long int num = 612852475143;
	int i = 2;

	while (num > 2)
	{
		if (num % i == 0)
		{
			printf("%d ", i);
			num = num / i;
		}
		else 
			i++;
	}
	return (0);
}
