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
	unsigned int password;

	srand(time(NULL));

	password = rand();

	printf("%u\n", password);
	return (0);
}
