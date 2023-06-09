#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name
 * @argc: contains the number of arguments passed to the program
 * @argv: is a one-dimensional array of strings passed to the program
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}

	return (0);
}
