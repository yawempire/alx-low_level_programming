#include "variadic_functions.h"

/**
  * sum_them_all - Sum of all its parameters
  * @n: Parameters passed to the function
  *
  * Return: (0) if n is (0) otherwise sum
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int j, sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (j = 0; j < n; j++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
