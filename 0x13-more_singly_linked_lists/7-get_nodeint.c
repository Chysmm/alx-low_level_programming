#include "lists.h"
/**
  *get_nodeint - returns the nth node of a linked list. 
  * @head: first node of a linked list
  * @index: index of node to return
  *
  * Return: pointer to the node or null
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;
while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}
