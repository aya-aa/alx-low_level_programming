#include "lists.h"
/**
* get_nodeint_at_index - returns the node of a given index of a linked list
* @head: first node in the linked list
* @index: index of the node to return
*
* Return: pointer to the node we're looking for, or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *p = head;
while (p && i < index)
{
p = p->next;
i++;
}
return (p ? p : NULL);
}
