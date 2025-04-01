#ifndef LISTS_H
#define LISTS_H


/**
 * struct Node - define a new structure struct Node 
 * @str: a string
 * @len: length of the string
 * @next: a poniter to the next node
 * @list_t: alias of the structure
 */

typedef struct Node
{
        char *str;
        unsigned int len;
        struct Node *next;
}list_t;

size_t print_list(const list_t *h);

#endif
