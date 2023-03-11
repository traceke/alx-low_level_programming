#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives including the first one
 *
 * @argc: agrument count
 * @argv: argument vector
 *
 * Return: returns 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
