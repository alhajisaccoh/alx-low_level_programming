#include "main.h"

int check_pal(char *s int i, int len);
int _strlen_recursion(char *s);

/**
 * int is_palindrome - checks if a string is a palindrome.
 * @s: String to reverse.
 *
 * Return: 1 if it is, 0 it is not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length.
 * @s: string to calculate of
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - check the character recursively for palindrome
 * @s: String to check.
 * @i: iterator
 * @len: Lenght of the string.
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}