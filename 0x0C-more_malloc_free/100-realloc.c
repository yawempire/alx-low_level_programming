#include <main.h>
#include <string.h>
#include <stdlib.h>

/**
 * *_realloc - realloc a memory block using malloc
 * @ptr: ptr to memory previsouly allocated using malloc
 * @old_size: old size of malloc
 * @new_size: new size of malloc
 *
 * Return: pointer to the new memory block allocted
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
			ptr1[j] = old_ptr[j];
	}

	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
			ptr1[j] = old_ptr[j];
	}

	free(ptr);
	return (ptr1);
}
