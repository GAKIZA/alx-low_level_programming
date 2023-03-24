#include "main.h"

/**
 * more_numbers - Printing numbers from 0 to 14 ten times
 * Return: a series of numbers from 0 to 14 ten times
 */

void more_numbers(void)
{
	int i, k;

	for (i = 0; i < 10; i++)
	{
	for (k = 0; k <= 14; k++)
	{
	if (k < 10)
	{
		_putchar(k + '0');
	}
	else
	{
		_putchar('1');
		_putchar(k % 10 + '0');
	}
	}

	_putchar('\n');
	}
}


