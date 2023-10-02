#include "main.h"
/**
* _sqrt_recursion - return the square root of a number
* @n : input int
* Return : the square root of the number or -1
*/

/**
* _sqrt_function - helper function to calculate the square root of a number
* @n : input int
* @i: input i counter
* Return : the square root of the number or -1
*/

int _sqrt_function(int n, int i)
{
if (i * i > n)
	return (-1);
else if (i * i == n)
	return (i);
else
	return (_sqrt_function(n, i+1));
}

int _sqrt_recursion( int n)
{
if (n < -1)
	return (-1);
else
	return (_sqrt_function(n, 0));
}
