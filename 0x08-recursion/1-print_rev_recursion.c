#include "main.h"
/**
 * print_rev_recursion is a recursive function that prints a string in reverse
 * @s:string to print
 * return: always 0 success
*/
void _print_rev_recursion(char *s)
{
  if (*s)
  {
    _print_rev_recursion(s + 1);
    _putchar(*s);
  }
  else
    return;
}
