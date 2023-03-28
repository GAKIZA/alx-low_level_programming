#include "main.h"
#include <stdio.h>

/**
 *swap_int - Swaps the values of two integers a and b
 *@a: the first integer
 *@b: the second interger
 *Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

