#include "main.h"
/**
 * factorial - returns the factorial of a given number
 *
 *@n: an input number
 *Return: a factorial of a number
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
else if (n <= 1)
	return (1);
else
	return (n * factorial(n - 1));
}
