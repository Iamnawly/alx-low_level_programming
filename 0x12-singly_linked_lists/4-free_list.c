#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 * written by apete
 */
void free_list(list_t *head)
{
	/*int*/
	list_t *bend;

	while (head)
	{
		bend = head->next;
		free(head->str);
		free(head);
		head = bend;
	}
}
