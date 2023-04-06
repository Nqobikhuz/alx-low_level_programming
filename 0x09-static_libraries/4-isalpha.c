#include "main.h"

/**
 * _isalpha - print uppercase characters
 * @c: parameter to be printed
 * Return: 1 is c, else 0
 */

int _isalpha(int c)
{
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        {
                return (1);
        }
        else
        {
                return (0);
        }
        _putchar('\n');
}
