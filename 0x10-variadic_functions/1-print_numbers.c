#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_numbers - Function to print all numbers followed by a new line
  * @separator: First arg
  * @n: Last arg
  *
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int index;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(args, int));

		if (index < n - 1 && separator != NULL)
		{
			printf("%c ", *separator);
		}
	}

	va_end(args);

	printf("\n");
}
