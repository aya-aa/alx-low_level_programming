#include "main.h"
/**
* palindrome- checks if string is palindorme recursively
* @s: string to check
* @i: iterator
* @len: length of the string
* Return: 1 if palindrome, 0 if not
*/

int palindrome(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
	return (0);
if (i >= len)
	return (1);
return (palindrome(s, i + 1, len - 1));
}

/**
* _strlen_ - returns the length of a string
*@s: input string
* Return: length of the string
*/
int _strlen_(char *s)
{
if (*s == '\0')
	return (0);
return (1 + _strlen_(s + 1));
}

/**
* is_palindrome - checks if a string is a palindrome
* @s: input string
* Return: 1 if it is, 0 it's not
*/
int is_palindrome(char *s)
{
if (*s == 0)
	return (1);
return (palindrome(s, 0, _strlen_(s)));
}
