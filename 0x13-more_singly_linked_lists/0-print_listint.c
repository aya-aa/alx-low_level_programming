#include"lists.h"

/**
*size_t print_listint: a function that prints the content of nodes
*@h : linked list of type listint
*Return: number of nodes
*/

int size_t print_listint(const listint_t *h)
{ 
listint_t *p;
p = h;
int i = 0;
while (p)
{
printf("%d\n", p->n);
p= p->next;
i++;
}
return (i);
}
