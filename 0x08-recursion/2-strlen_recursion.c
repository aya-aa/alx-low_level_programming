#include "main.h"
/**
 * _strlen_rcursion - recursive function returns length of char*
 * @s: input string
 * output: int 
*/

int _strlen_recursion(char *s)
{
if (*s)
{
	return(1 + _strlen_recursion(s + 1));
}
