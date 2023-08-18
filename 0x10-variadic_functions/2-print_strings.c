#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Function to print str
 * @separator: First arg
 * @n: Second arg
 * @...: Last arg
 *
 * Description: Print if separator is NULL
 *		Print if one str is NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index <  n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(strings);
}
