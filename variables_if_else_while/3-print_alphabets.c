#include <stdio.h>

/**
 * main - entry point
 * Description: prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0 (Success)
 */


int main(void)
{

	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
