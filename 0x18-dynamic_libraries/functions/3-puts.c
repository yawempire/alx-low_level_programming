#include "main.h"

/**
 * _puts - Prints a string
 * @str: String to print
 *
 * Return: void which means the answer is correct
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
