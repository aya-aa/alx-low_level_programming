#include "lists.h"
/**
* free_listint2 - frees a linked list
* @head: head of listint_t list
*/
void free_listint2(listint_t **head)
{
listint_t *p;
if (head == NULL)
return;
while (*head)
{
p = (*head)->next;
free(*head);
*head = p;
}
*head = NULL;
}
