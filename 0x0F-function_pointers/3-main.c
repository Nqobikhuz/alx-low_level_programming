#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * main - entry point
 *
 * @argc: number of arguments on the command line
 * @argv: array conatining the arguments on the command line
 *
 * Return: 0 on success, 98 if the number of arguments is wrong,
 * 99 if the operator is invalid, or 100 if there is an error in 
 * the division.
 */

int main(int argc, char *argv[])
{
	int (*op_functions(int a, int b));
	int num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if(argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	op_functions = get_op_func(argv[2]);


	if (op_functions == '\0')
	{
		printf("Error\n");
		return (98);
	}

	if  ((argv[2] == '/' || argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%ls\n", op_functions(num1, num2));

	return (0);

}

