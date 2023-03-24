#include "main.h"

/**
 * print_most_numbers - Print numbers from 0 t0 9 except 2 and 4
 * Return: 01356789
 */
void print_most_numbers(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
	{
		if (!(b == '2' || b == '4'))
			_putchar(b);
	}
	_putchar('\n');
}
