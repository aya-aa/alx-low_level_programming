#include "main.h"
/**
* factorial - returns factorial of an int
* @n: input
* Return: int the factorial of n
*/

int factorial(int n)
{
if (n < 0)
{
	return (-1);
}
else if (n == 0)
	return (1);
else 
{
	return(n * factorial(n - 1));
}
}
