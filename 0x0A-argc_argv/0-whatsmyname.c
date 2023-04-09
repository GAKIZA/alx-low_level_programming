#include <stdio.h>
#include "main.h"
/**
 * main - print the name of the executed program
 * @argc: number of arguments passed to main
 * @argv: array of all arguments passed to main
 * Return: ALways 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);

}
