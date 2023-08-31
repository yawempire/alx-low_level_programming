#include "main.h"

/**
 * clear_bit - value of a given bit to 0
 * @n: first args
 * @index: second args
 *
 * Return: (1) Success, (-1) Failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
