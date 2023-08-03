#include <stdio.h>
#include "main.h"
/**
 * _putchar - Writes character c to stdout
 * @c: char to print
 *
 * Return: (0) Success
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
