#include <stdio.h>
/**
 * main - prints 1 to 100. 
 * For every multiple of 3 prints 'Fizz'
 * For every multiple of 5 prints 'Buzz'
 * For multiples of 3 and 5, prints 'FizzBuzz'
 *
 * Return: returns 0
 */
int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
