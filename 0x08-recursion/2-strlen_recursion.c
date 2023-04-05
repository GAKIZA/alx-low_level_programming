#include "main.h"
/**
 * _strlen_recursion - provide the length of a given string
 * @s: the pointer to a string
 *Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int k = 0;

	if (*s)
	{
		k++;
		k += _strlen_recursion(s + 1);
	}
	return (k);
}

