#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument number
 * @argv: argument vector
 * Return: 0 if no number passed to program
 *         1 if one of the number contains symbols that are not digits
 *         otherwise number
 *
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 2)     /* argc == 1 (if program is executed without any arguments, argc will be 1)*/
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *p = argv[i];

		while (*p)
		{
			if (!isdigit(*p))
			{
				printf("Error\n");
				return (1);
			}
			p++;
		}
		sum += atoi(argv[i]);    /* convert the string to an integer and add it to sum */
	}
	printf("%d\n", sum);
	return (0);
}
