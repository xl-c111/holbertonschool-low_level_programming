#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Description: use for loop and if condition to print
 * Return: Always 0 (Successs)
 */

int main(void)
{
	int num, num1, num2, num3;
	int num4;

	for (num = 0; num <= 9; num++)
	{
		for (num1 = 0; num1 <= 9; num1++)
		{
			for (num2 = num; num2 <= 9; num2++)
			{
				if (num == num2)
				{
					num4 = num1 + 1;
				} else
				{
					num4 = 0;
				}

				for (num3 = num4; num3 <= 9; num3++)
				{
					putchar(num + '0');
					putchar(num1 + '0');
					putchar(' ');
					putchar(num2 + '0');
					putchar(num3 + '0');
					if (!(num == 9 && num1 == 8 && num2 == 9 && num3 == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}

	}
	putchar('\n');
	return (0);
}
