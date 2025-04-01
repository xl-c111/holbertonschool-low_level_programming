#ifndef LISTS_H
#define LISTS_H


/**
 * struct list_s - a singly linked list node
 * @str: a string
 * @len: length of the string
 * @next: a poniter to the next node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
