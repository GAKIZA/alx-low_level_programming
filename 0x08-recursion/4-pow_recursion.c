#include "main.h"
/**
 * _pow_recursion - raises a number to a given power
 *@x: a number to be raised to a given power
 *@y: a power to raise to a number
 *Return: the result of x raised to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
