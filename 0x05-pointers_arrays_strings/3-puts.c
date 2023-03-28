#include "main.h"

/**
 *_puts - print a string to standard out
 *@str: a sstring to print out
 *Return: Empty
 */

void _puts(char *str)
{
	for ( ; *str != 0; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
