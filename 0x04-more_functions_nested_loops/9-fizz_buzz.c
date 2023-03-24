#include<stdio.h>
#include "main.h"

/**
 *main - Starting point
 *Description: printing numbers from 0 to 100
 *Fizz will replace multiple of 3, Buzz replaces multiple of 5 and/
 *fizzbuzz replaces multiple of 15
 * Return:0 Always
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%i", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
