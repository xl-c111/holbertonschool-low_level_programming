#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  generates random valid passwords for the program 101-crackme
 * Return: Always 0 (Success)
 *
 *
 */
int main(void)
{
	int r = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));

	while (c < 2771)
	{
		r = rand() % 127 + 1;

		if ((c + r) > 2771)
			break;
		c = c + r;
		printf("%c", r);
	}

	printf("%c\n", (2772 - c));
	return (0);
}
