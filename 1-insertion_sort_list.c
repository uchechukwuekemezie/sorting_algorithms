#include "sort.h"
/**
 *insertion_sort_list - This function sorts a doubly linked list of integers in an ascending
 *order which uses the Insertion sort algorithm
 *@list: doubly linked list of integers that will be sorted
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *tmp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

current = (*list)->next;

while (current != NULL)
{
tmp = current->prev;
while (tmp != NULL && tmp->n > current->n)
{
/* Swap nodes */
if (tmp->prev != NULL)
tmp->prev->next = current;
else
*list = current;

current->prev = tmp->prev;
tmp->prev = current;
tmp->next = current->next;

if (current->next != NULL)
current->next->prev = tmp;

current->next = tmp;
/* Print list */
print_list(*list);

tmp = current->prev;
}
current = current->next;
}
}
