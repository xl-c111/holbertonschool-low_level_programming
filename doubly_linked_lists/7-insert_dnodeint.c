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
	if (idx == 0）            /* inserts a newNode at the head */
	{
		newNode->prev = NULL;
		newNode->next = *h;        
		if (*h != NULL)
			(*h)->prev = newNode;     /* original head pre ptr points to newNode */
		/* when inserting a new node at the head, the entry point changes, must update the head ptr to newNode */
		*h = newNode;     
		return (newNode);
	}
	/* sets currentNode to point the head of the list, allows the function to traverse the list starting from the head */ 
	currentNode = *h;    

	while (currentNode != NULL && i < idx - 1)   /* ensures i reach the node just before the target index, loop stops */
	{
		currentNode = currentNode->next;
		i++;
	}

	if (currentNode == NULL)         /* means the index exceed the length of the list */
		return (NULL);

	newNode->next = currentNode->next;     /* next ptr is set to the node that comes after the currentNode */       
	newNode->prev = currentNode;           /* prev ptr is set to the currentNode */

	if (currentNode->next != NULL)
		 /* if currentNode has a next node, update its previous pointer to point back to the newNode*/
		currentNode->next->prev = newNode; 
	currentNode->next = newNode;           /* updates currentNode's next ptr point to newNode*/
	return (newNode);
}
