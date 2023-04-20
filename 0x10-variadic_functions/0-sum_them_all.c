#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that sums all its passed parameters
 * @n: number of parameters passed to the function
 * Return: the sum of all inputted parameters, if n > 0
 * otherwise return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list s;
	unsigned int i, sum = 0;

	va_start(s, n);

	for (i = 0; i < n; i++)
		sum += va_arg(s, int);
	va_end(s);
	return (sum);
}


