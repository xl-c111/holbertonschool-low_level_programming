#include "main.h"

/**
 * more_numbers - print 10 times the numbers, from 0 to 14
 *
 * Description: followed by a new line
 *
 *
 */
void more_numbers(void)
{
	int n;
	int i;

	i = 0;

	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');


		}
		_putchar('\n');
		i++;
	}

}
