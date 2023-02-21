#include "main.h"
/**
 * _islower - function checks for a lowercase character
 *
 * @c: the character to be checked
 *
 * Return: return 1 (if c is lowercase), return 0 (if otherwise)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

