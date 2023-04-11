#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all aruments it recives
 * @argc: argument count
 * @argv: argument vector
 * Return: ALways 0
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

