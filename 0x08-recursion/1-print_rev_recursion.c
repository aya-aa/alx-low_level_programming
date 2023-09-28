#include "main.h"
/**
 * _print_rev_recursion - is a recursive function that prints a string in reverse
 * @s:string to print
 * return: always 0 success
 * description: this function uses recursion to print characters
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
