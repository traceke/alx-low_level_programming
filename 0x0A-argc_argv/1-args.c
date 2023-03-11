#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: argument count
 * @argv: argument vector(array of strings)
 *
 * Return: returns 0 on success
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc);
	return (0);
}
