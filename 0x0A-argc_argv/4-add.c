#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * main - program that adds positive numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: returns 0 on success, 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j;
	int sum = 0;

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; j < strlen(argv[i]) ; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
