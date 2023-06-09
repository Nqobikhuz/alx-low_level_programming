#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers
 * @argc: argument count on the command line
 * @argv: array of pointers to the strings
 * Return: Always 0 for success
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
		return (0);
}
