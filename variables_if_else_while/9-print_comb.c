#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Description: use for loop to print
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
