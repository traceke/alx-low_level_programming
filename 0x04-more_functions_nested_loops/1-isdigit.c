#include "main.h"
/**
 * _isdigit - checks for a digit ( 0 through 9)
 *
 * @c: parameter c
 *
 * Return: returns 1 if c is a digit, returns 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
