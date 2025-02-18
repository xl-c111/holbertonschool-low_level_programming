#include <stdio.h>

/**
 * main - entry point
 * Description: prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 *
 */

int main(void)
{

	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
