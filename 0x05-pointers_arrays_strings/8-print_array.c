#include "main.h"
#include <stdio.h>

/**
 *print_array - print the elements of any array
 *@a: the pointer to an array to print out
 *@n: number of elements that composed of an array
 *Return: Always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
