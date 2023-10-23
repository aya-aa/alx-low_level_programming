#include "lists.h"
/**
* find_listint_loop - finds the loop in a linked list
* @head: head of linked list
*
* Return: address of the node where the loop starts, or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *b = head;
listint_t *a = head;
if (!head)
return (NULL);
while (b && a && a->next)
{
a = a->next->next;
b = b->next;
if (a == b)
{
b = head;
while (b != a)
{
b = b->next;
a = a->next;
}
return (a);
}
}
return (NULL);
}
