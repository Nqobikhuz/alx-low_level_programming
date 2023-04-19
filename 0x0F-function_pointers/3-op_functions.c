#include "calc.h"

/**
 * op_add - Adds two integers
 * @a: first integer
 * @b: second integer
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	add = a + b;
	return (add);
}

/**
 * op_sub - Subtracts integers a and b
 * @a: first intger
 * @b: second integer
 * Return: The difference of a and b
 */

int op_sub(int a, int b)
{
	difference = a - b;
	return (difference);
}

/**
 * op_mul - Multiplies integers a and b
 * @a: first intger
 * @b: second integer
 * Return: The product of a and b
 */

int op_mul(int a, int b)
{
	product = a * b;
	return (product);
}

/**
 * op_div - Divides integers a and b
 * @a: first intger
 * @b: second integer
 * Return: The division of a and b
 */

int op_div(int a, int b)
{
	division = a / b;
	return (division);
}
/**
 * op_mod - Multiplies integers a and b
 * @a: first intger
 * @b: second integer
 * Return: The remainder of the division of a and b
 */

int op_mod(int a, int b)
{
	rem = a % b;
	return (rem);
}
