#include <stdio.h>

/**
 * * main - prints the sum of all multiple of 3 or 5 up to 1024
 * Return:  Always (Success)
 */
int main(void)
{
	int i, sum = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
