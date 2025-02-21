#include "main.h"

/**
 * times_table - print a 9 times table
 *
 * Description: start from 0
 * Result: multiplication of num1 and num2
 */

void times_table(void)
{
	int num1 = 0, num2, result;

	while (num1 <= 9)
	{
		num2 = 0;

		while (num2 <= 9)
		{
			result = num1 * num2;

			if (result <= 10)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('$');
				_putchar('\n');
			}
			num2++;
		}
		num1++;
	}


}
