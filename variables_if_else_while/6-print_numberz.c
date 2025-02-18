#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Description: use for loop to print 0-9
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
