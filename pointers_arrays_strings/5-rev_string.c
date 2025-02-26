#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 *
 *
 *
 */
void rev_string(char *s)
{
	int length = 0;
	char temp;
	int left, right;

	while (s[length] != 0)
	{
		length++;
	}

	left = 0;
	right = length - 1;

	while (right > left)
	{
		temp = s[left];
		s[left] = s[right];
		s[right] = temp;

		left++;
		right--;

	}
}
