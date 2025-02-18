#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Description: use for loop to print
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	int num1;

	for (num = 0; num < 9; num++)
	{
		for (num1 = num + 1; num1 <= 9; num1++)
		{
			putchar(num + '0');
			putchar(num1 + '0');

			if (num < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
