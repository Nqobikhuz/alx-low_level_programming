#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all aruments it recives
 * @argc: argument count in command line
 * @argv: array of pointers to strings on the command line
 * Return: ALways 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", argv++);
	return (0);
}

