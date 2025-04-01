#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: a pointer to the head of the list
 *
 */
void free_list(list_t *head)
{
	list_t *temp;
	
	while (head != NULL)
	{
		temp = head;
		head = temp->next;
	}
	if (temp->str)
		free(temp->str);
	free(temp);
}
