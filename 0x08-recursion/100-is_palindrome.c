#include "main.h"
int check_palindrome(char *s, int i, int len);
/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to be checked
 *
 * Return: returns 1 if it is a palindrome, returns 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}
/**
 * check_palindrome - recursively checks string for a palindrome
 *
 * @s: string to be checked
 * @i: iterator
 * @len: length of the string
 *
 * Return: returns 1 if true, 0 if false
 */
int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));

}
/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
