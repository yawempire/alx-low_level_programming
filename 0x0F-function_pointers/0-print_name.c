#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Printing a name using pointer to the function
 * @name: str to add
 * @f: ptr to the function
 * Return: (0)
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
