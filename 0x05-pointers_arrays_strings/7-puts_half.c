#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 *@str: pointer to the string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length = 0, n;

	while (*(str + length) != '\0')
	{
		length++;
	}
	length = length + 1;
	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length - 1) / 2;
	while (str[n] != '\0')
	{
		_putchar((str[n]));
		n++;
	}
	_putchar('\n');
}
