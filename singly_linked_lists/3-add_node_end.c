#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * _strlen - returns the length of a string
 * @str: pointer to the string whose length to be measured
 *
 * Return: length of the string (excluding '\0')
 */
int _strlen(const char *str)
{
	unsigned int length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head pointer of the list
 * @str: pointer points to the string to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;                            /* used to store the new node*/
	list_t *temp;                               /* used to traverse the linked list */

	if (head == NULL || str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));           /* allocates memory for the new node with the size of list_t structure */ 
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);        /* uses strdup, the new node gets its own copy of str, doesn't rely on the orginal memory */

	if (newNode->str == NULL)          /* if the str duplication fails */
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = _strlen(newNode->str);      /* calculates the length of new str and stores it in the len member of new node*/
	newNode->next = NULL;     /* initializes the next ptr of the new node to NULL, because this is gonna be the last node in the list*/
        
	/* head is a ptr to head ptr, *head is head ptr itself, *head == NULL is checking if the list is empty */
	if (*head == NULL)                        
	{
		*head = newNode;            /* if the list is empty, set the new node as head ptr and return */
		return (newNode);
	}

	temp = *head;                       /* set temp as the head ptr(temp now points to the first node of the list)*/
	while (temp->next != NULL)         
	{
		temp = temp->next;          /* temp moves along the list until reaches the last node */

	}
	temp->next = newNode;               /* once loop finishes, set next ptr of temp(the current last node) to the new node */
	return (newNode);
}
