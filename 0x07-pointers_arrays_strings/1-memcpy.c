#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: location of stored memory
 * @src: location of copied memory
 * @n: the number of bytes to be copied and stored
 *
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0 ; i < j ; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

