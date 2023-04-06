#include "main.h"

/**
 * _strcat - will concatenate two scrings
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
        int destlength = 0;
        int i;

        for (i = 0; dest[i] != '\0'; i++)
                destlength++;

        for (i = 0; src[i]; i++)
                dest[destlength + i] = src[i];

        return (dest);
}
