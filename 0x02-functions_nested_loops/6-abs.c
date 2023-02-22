#include "main.h"
/**
 * _abs - this function computes the absolute value of an integer
 *
 * @n: n is an integer
 *
 * Return: returns n
 */
int _abs(int n)
{
	if (n >= 0)
		n = n;
	else if (n < 0)
		n = -(n);
	return (n);
}

