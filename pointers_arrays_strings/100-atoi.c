#include "main.h"
/**
 * _atoi - convert a string to an integer
 *
 * @s: the string to be converted
 *
 * Return: integer value, or 0 if no valid number found
 *
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int found_digit = 0;

	while (*s != '\0')
	{
		if (*s == '-' && !found_digit)
		{
			sign *= -1;
		}
		else if (*s == '+' && !found_digit)
		{
		}
		else if (*s >= '0' && *s <= '9')
		{
			found_digit = 1;
			break;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';

		if (result > (2147483647 - digit) / 10)
		{
			return (sign == 1 ? 2147483647 : -2147483648);
		}
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
