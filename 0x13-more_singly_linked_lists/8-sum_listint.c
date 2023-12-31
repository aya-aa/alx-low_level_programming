#include "lists.h"
/**
* sum_listint - calculates the sum of all the data in a listint_t list
* @head: first node in the linked list
*
* Return: sum of the elements of the list
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *p = head;
while (p)
{
sum += p->n;
p = p->next;
}
return (sum);
}
