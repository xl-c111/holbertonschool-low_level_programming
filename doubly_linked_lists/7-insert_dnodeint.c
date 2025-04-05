#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - nserts a new node at a given position
 * @h: pointer o to the head pointer of the list
 * @idx: the index of the list where the new node should be added
 * @n: the integer that holds the value stored in each node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *currentNode;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = *h;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	currentNode = *h;
	while (currentNode != NULL && i < idx - 1)
	{
		currentNode = currentNode->next;
		i++;
	}
	if (currentNode == NULL)
	{
		free(currentNode);
		return (NULL);
	}
	newNode->next = currentNode->next;
	newNode->prev = currentNode;

	if (currentNode->next != NULL)
		currentNode->next->prev = newNode;
	currentNode->next = newNode;
	return (newNode);
}
