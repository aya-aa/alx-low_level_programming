#include "lists.h"
/**
* free_listint_safe - frees a given linked list
* @h: pointer to the first node in the linked list
* Return: number of elements in the freed list
*/
size_t free_listint_safe(listint_t **h)
{
size_t n = 0;
int d;
listint_t *temp;
if (!h || !*h)
return (0);
while (*h)
{
d = *h - (*h)->next;
if (d > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
n++;
}
else
{
free(*h);
*h = NULL;
n++;
break;
}
}
*h = NULL;
return (n);
}
