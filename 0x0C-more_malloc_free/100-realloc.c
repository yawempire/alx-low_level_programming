#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
  * _realloc - reallocates a memory block using malloc
  * @ptr: pointer to the allocated previous memory by malloc
  * @old_size: old size of malloc
  * @new_size: new size of malloc
  *
  * Return: pointer to new memory block allocated
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int size;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);
		else
			return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size < new_size)
		size = old_size;
	else
		size = new_size;

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	memcpy(new_ptr, ptr, size);

	free(ptr);

	return (new_ptr);
}
