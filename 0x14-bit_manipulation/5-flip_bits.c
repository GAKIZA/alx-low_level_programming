#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @f: first number
 * @s: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int  f, unsigned long int s)
{
	int i, a = 0;
	unsigned long int current_number;
	unsigned long int exclusive_number = f ^ s;

	for (i = 63; i >= 0; i--)
	{
		current_number = exclusive_number >> i;
		if (current_number & 1)
			a++;
	}
	return (a);
}
