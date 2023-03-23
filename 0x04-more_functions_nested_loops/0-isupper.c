#include "main.h"
/**
 * _isupper - Program to check whether letter is upper or lower
 * @x: number to be checked
 * Return: 1 upper 0 lower
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
