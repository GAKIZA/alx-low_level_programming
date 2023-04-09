#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to it.
 * @argc: number of arguments passed to main
 * @argv: array of argments passed to main
 * Return: ALways 0(Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
