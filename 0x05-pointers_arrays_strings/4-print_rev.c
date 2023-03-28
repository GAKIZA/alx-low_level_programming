#include "main.h"

/**
 *print_rev -  Print a string in reverse to standard out
 *@s: A sstring to print out
 *Return: empty
 */
void print_rev(char *s)
{
	int w = 0;

	while (s[w] != '\0')
	{
		w++;
	}
	for (w -= 1; w >= 0; w--)
	{
		_putchar(s[w]);
	}
	_putchar('\n');
}

