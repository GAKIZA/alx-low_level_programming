#include "main.h"

/**
 * more_numbers - Print the numbers from 0 up to 14
 * Return: list of numbers from 0 to 14 repeated 10 times
 */
void more_numbers(void)
{
	int u, v;

	for (u = 0; u < 10; u++)
	{
		for (v = 0; v <= 14; v++)
		{
			if (v >= 10)
			{_putchar((v / 10) + '0');
			}
			_putchar((v % 10) + '0');
		}
		_putchar('\n');
	}
}
