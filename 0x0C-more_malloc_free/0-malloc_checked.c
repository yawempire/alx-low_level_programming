#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - Allocates memory using malloc
  * @b: unsigned integer argument
  *
  * Return: Pointer to the malloc
  */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}

	return (x);
}
