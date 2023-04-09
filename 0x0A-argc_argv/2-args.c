#include <stdio.h>
#include "main.h"

/**
 * main - prints all the arguments that passed to it.
 * @argc: Number of arguments passed to main
 * @argv: array of arguments passed to main
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int k = 0;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
