#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head pointer of the list
 * @n: an integer that holds the value stored in each node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
		(*head)->prev = newNode;
	}
	*head = newNode;
	return (newNode);
}
