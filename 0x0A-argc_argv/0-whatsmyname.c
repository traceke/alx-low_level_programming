#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 0 if successful
 */
int main(int argc, char* argv[])
{
	int i = 0;

	for (i = 0 ; i < argc ; i++)
	printf("%s\n", argv[i]);
	return (0);
}
