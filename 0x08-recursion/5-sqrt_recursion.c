#include "main.h"
int nat_sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number
 *
 * Return: returns the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (nat_sqrt(n, 1));
}
/**
 * nat_sqrt - calculates the natural sqaure rrot of a number
 *
 * @n: number
 * @i: iterator
 *
 * Return: the natural square root
 */
int nat_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (nat_sqrt(n, i + 1));
}
