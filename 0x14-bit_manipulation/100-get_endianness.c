#include "main.h"

/**
 * get_endianness - if a machine is little or big endian
 * Return: (0) for Big, (1) for Little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
