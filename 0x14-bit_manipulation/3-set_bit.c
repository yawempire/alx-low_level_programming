#include "main.h"

/**
 * set_bit - set a bit at a given index
 * @n: pointer to number to change
 * @index: index of the bit
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
