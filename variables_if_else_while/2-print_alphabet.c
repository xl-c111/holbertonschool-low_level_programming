#include <stdio.h>

/**
 * main - entry point
 * Despription: prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
