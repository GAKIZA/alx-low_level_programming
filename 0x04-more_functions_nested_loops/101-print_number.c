#include "main.h"

/**
 * print_number - a function to print out a given number
 *@n: a number neeeded to show on screen
 *Return: empty
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
			i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
