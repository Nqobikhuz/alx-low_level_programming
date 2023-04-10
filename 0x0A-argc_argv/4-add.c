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
       char *j;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			j = argv[i];
			if (*j < 48 || *j > 58)
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(j);
		}
			printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

