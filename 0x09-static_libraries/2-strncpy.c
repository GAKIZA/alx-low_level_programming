#include "main.h"

/**
 * _strncpy - copy a string from location pointed by src to dst
 *@dest: Pointing to where a string is copied to
 *@src: Pointing to where a string is copied from
 *@n: Number of bytes of a string to be copied
 *
 * Return: Destination address
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
