#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * @b: number of bytes to allocate
 *
 * Return: returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)	
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
