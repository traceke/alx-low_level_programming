#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: returns 0 on success
 * 1 if less that 2 arguments are provided
 */
int main(int argc, char *argv[])
{

	int i;
	int mul;
	int j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i * j;
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		if (argc < 3 || argc > 3)
			printf("Error\n");
		return (1);
	}
}
