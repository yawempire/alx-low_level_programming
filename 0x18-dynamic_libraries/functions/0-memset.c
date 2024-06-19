#include "main.h"
/**
 * _memset - Fills block of memory with a certain value
 * @s: Starts address of memory to be filled
 * @b: The value we want
 * @n: Number of bytes to be changed
 *
 * Return: Changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
