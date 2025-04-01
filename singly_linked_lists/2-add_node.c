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
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer points to the head pointer of the list
 * @str: a pointer to the string to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	if (head == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = _strlen(temp->str);
	temp->next = *head;
	*head = temp;
	return (temp);

}
