#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * written by apete
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/*printf*/
	list_t *bew;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	bew = malloc(sizeof(list_t));
	if (!bew)
		return (NULL);

	bew->str = strdup(str);
	bew->len = len;
	bew->next = NULL;

	if (*head == NULL)
	{
		*head = bew;
		return (bew);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = bew;

	return (bew);
}
