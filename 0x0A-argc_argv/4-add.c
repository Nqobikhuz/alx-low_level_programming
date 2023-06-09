#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);
		}
			printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

