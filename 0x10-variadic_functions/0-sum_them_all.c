#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -A function that returns the sum of all its parameters
 * @n: number of parameter passed to the function
 * Return: 0 if n == 0 else sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j, sum = 0;

	va_start(ap, n);

	for (j = 0; j < n; j++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
