#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 *                            dlistint_t linked list
 * @head: pinter to the head pointer of the list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i, j;
	dlistint_t *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (index >= i)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	if (index == (i - 1))
	{
		*head = temp;
		for (j = 0; j < index; j++)
			temp = temp->next;
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	temp = *head;
	for (j = 0; j < index; j++)
		temp = temp->next;
	temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
