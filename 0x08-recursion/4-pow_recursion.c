#include "main.h"
/**
* _pow_recursion - returns pow of x by y
*@x : the base
*@y: the exponent
* Return: The result of x^y
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
	return (-1);
}
else if (y == 0)
	return (1);
else
{
	return (x * _pow_recursion(x, y - 1));
}
}
