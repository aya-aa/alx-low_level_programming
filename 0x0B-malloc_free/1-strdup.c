#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - returns pointer to copied string
* @str: char
* Return: pointer to char
*/
char *_strdup(char *str)
{
char *ch;
unsigned int i = 1 , j; 
if (str == NULL)
return (NULL);

while (str[i] != '\0')
i++;

ch = malloc(sizeof(char) * (i + 1));
if (ch == NULL)
return (NULL);


for (j=0; j < i; j++)
ch[j]=str[j];

return (ch);
}

