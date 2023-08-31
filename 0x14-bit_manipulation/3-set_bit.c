#include "main.h"

/**
 * set_bit - A bit at a given index to 1
 * @n: first args
 * @index: second args
 *
 * Return: (1) Success, (-1) Failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
