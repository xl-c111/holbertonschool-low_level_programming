#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: a poniter to a pointer to a char
 * @to: poniter to a char that holds the new value
 *
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
