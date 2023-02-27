#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers and a new line
 *
 * @a: array of integers
 *
 * @n: number of elemnts in the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <  n ; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
