#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Description: use for loop to print 0-9
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
