#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Parameter on each element of an array
 * @array: Array
 * @size: What number of element to print
 * @action: ptr to print in regular or hex
 * Return: Null
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
