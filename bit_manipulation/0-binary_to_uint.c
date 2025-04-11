#include <stddef.h>
#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if:
 *         - there is one or more chars in the string b that is not 0 or 1
 *         - b is NULL
 * Description: - (*b - '0') converts a binary digit char('0' or '1') into an int(0 or 1); 
 *              - i = i * 2 +... shift the current result i left by one place
 *                               - which means each binary bit moves towards the higher bit == multiplying the number by 2                             
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;  /* initialize the variable to 0, used to accumulate the final result */

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		i = i * 2 + (*b - '0');  
		b++;
	}
	return (i);
}
