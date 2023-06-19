#include "main.h"

/**
 *_strlen - Returns the number of characters of a string
 *@s: a string to counts the number of its characters
 *Return: number of characters that made a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
