#include "main.h"
#include <stdlib.h>

/**
 *print_triangle - entry point
 *Description: print triangles
 *@size: size  of a triange
 *Return: void
 */



void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (x = 1; x <= size; x++)
	{
		for (y = size - x; y >= 1; y--)
		{
			_putchar(' ');
		}
			for (z = 1; z <= x; z++)
			{
				_putchar('#');
			}
		_putchar('\n');
}
	}
	}
