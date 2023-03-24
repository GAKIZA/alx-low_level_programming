#include "main.h"
/**
 * print_numbers - Print numbers from 0 to 9
 * Return: Numbers from 0 to 9
 */
void print_numbers(void)
{
	char w;

	for (w = '0'; w <= '9'; w++)
	{
		_putchar(w);
	}
	_putchar('\n');
}
