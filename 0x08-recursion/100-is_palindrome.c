#include "main.h"
int real_palindrome(char *s, int begin, int end);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: pointer to a string
 *
 * Return: returns 1 if a string is a palindrome. Otherwise, 0.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (is_palindrome(s + 1));
}

/**
 * real_palindrome - checks if a string is a palindrome or not
 * @s: pointer to a string to be checked
 * @begin: index at start of the string
 * @end: index at end of theh string
 *
 * Return: 1 if palindrome. Otherwise, 0.
 */
int real_palindrome(char *s, int begin, int end)
{
	if (begin >= end)
		return (1);
	if (s[begin] == s[end])
		return (real_palindrome(s, begin + 1, end - 1));
	else
		return (0);
}
