#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: list_int to be freed
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
