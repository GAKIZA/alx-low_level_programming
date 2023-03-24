#include "main.h"

/**
 *Print_line - Draw a line of underscores
 *@n: Number of underscores composed of a line
 *Return:
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
	}
}

