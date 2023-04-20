#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums all parameters.
 * @n: No. of paramters passed to the function.
 * @...: A variable number of paramters
 * Return: Sum of all paramters || 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

