#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 * @head: the head pointer to the list
 * @index: the index of the node, starting from 0
 * Return:  returns the nth node of a dlistint_t linked list
 *          NULL if the node does not exist
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		else
		{
			temp = temp->next;
			count++;
		}
	}
	return (NULL);
}
