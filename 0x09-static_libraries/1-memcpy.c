#include "main.h"

/**
 *_memcpy - Function that duplicates memory area
 *@dest: Memory storage
 *@src: Memory where copied
 *@n: Num of bytes
 *
 *Return: Copied memory with char(n) byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
