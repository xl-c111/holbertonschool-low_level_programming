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
	list_t *newNode;
	list_t *temp;

	if (head == NULL || str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = _strlen(newNode->str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;

	}
	temp->next = newNode;
	return (newNode);
}
