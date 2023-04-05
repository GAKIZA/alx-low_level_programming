#include "main.h"
int _actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - a function that return the square root of a number
 *@n: number to calculate its square root
 *Return: The squareroot of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_actual_sqrt_recursion(n, 0));
}

/**
 * _actual_sqrt_recursion - recurses to find the natural square root
 *@n: number to find its natural square root
 *@i: the iterator
 *Return: square root of a number
 */
int _actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (_actual_sqrt_recursion(n, i + 1));

}
