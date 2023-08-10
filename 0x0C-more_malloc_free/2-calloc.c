#include "main.h"
#include <stdlib.h>

/**
  * _calloc - Allocates memory for an array
  * @nmemb:number elements in the array
  * @size: size of each elements in the array
  *
  * Return: Pointer to memory allocated
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		((char *)ptr)[i] = 0;
	}

	return (ptr);
}
