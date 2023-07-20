#include "stdarg.h"
#include "variadic_functions.h"

/**
 * sum_them_all - sum all the value pass on the function
 * @n: Total number of the arguments passed
 * Return: Worked sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vlstPtr;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(vlstPtr, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum = sum + va_arg(vlstPtr, int);

	va_end(vlstPtr);

	return (sum);
}

