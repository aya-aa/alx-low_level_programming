#include "main.h"
/**
 *_puts_recursion-recursive function that print a string 
 *@s:input
 *Return:nothing
*/
void _puts_recursion(char *s)
{
if (*s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
else
	 _putchar('\n');
}
