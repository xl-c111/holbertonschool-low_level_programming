#include <stdio.h>
#include <unistd.h>
/**
 * main - print without using functions in NAME
 * Description: prints exactly and that piece of art is useful
 *
 * Return: (1)
 *
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, sizeof(msg) - 1);
	return (1);
}
