#include "main.h"
#include <stdio.h>

/**
 *_strcpy - copies the string pointed to includeing the terminating null byte
 *@dest: Destinatio- where to copy to
 *@src: Source - Where to copy from
 * Return: The pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int x = 0;

	while (*(src + y) != '\0')
	{
		y++;
	}
	for ( ; x < y ; x++)
	{
		dest[x] = src[x];
	}
	dest[y] = '\0';
	return (dest);
}
