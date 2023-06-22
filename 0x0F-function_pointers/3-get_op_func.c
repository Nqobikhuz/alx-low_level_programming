#include "3-calc.h"

/**
 *
 * @s: opperand passed as an argument
 * to the program
 *
 * Return: A pointer to the function that
 * corresponds to the operator given as a parameter
 */

int (*get_op_func(char *s))(int, int);
{
	int i = 0;

	  op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

    while (op[i] != '\0')
    {
	    if (*s == ops[i])
	    return (ops[i]);
	    i++;
    }
    return (NULL);
}
