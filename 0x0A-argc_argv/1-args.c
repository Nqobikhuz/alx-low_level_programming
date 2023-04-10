#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the number of arguments passed into it
 * @argc: the argument count
 * @argv: the argument vector
 * Return: Always 0 for success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
