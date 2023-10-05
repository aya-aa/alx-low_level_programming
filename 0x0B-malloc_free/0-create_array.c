#include "main.h"
#include <stdlib.h>
/**
*create_array - function that creates an array
*@size: the size of the array
*@c: the character
*Return: return a pointer
*/

char *create_array(unsigned int size, char c)
{
if (size == 0)
return (NULL);
else
{
char *p;
p = malloc(sizeof(char) * size);
while (*p)
{
*p = c;
p++;
}
return (p);
}
}
