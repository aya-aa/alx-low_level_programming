#include "main.h"
/**
* _strlen_recursion - recursive function returns length of char*
* @s: input string
* Return: int length of string
*/

int _strlen_recursion(char *s)
{
if (*s)
{
	return (1 + _strlen_recursion(s + 1));
}
return (0);
}
