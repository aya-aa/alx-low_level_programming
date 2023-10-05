#include "main.h"
#include <stdlib.h>
/**
* str_concat - concats two strings
*@s1: first string to concat
*@s2: second string to concat
* Return: pointer to concatination of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *ch;
int i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

i = j = 0;
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
ch = malloc(sizeof(char) * (i + j + 1));

if (ch== NULL)
return (NULL);
i = j = 0;
while (s1[i] != '\0')
{
ch[i] = s1[i];
i++;
}

while (s2[j] != '\0')
{
ch[i] = s2[j];
i++, j++;
}
ch[i] = '\0';
return (ch);
}
