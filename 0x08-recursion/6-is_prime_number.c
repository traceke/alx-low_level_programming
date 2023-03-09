#include "main.h"
int check_prime(int n, int i);
/**
 * is_prime_number - checks if an integer is a prime number and returns 1
 * otherwise it returns 0
 *
 * @n: number to be checked
 *
 * Return: return 1 if true, 0 if false
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}

/**
 * check_prime - checks if an integer is a prime number recursively
 *
 * @n: integer to check
 * @i: iterator
 *
 * Return: return 1 if true, 0 if false
 */
int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 1)
		return (0);
	return (check_prime(n, i - 1));
}
