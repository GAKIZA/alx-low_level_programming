#include "main.h"

/**
 * _strcat - Append the src string to the dest string overwriting end string
 *@dest: Pointer to the destination string
 *@src:Pointer to the source string
 *Return:A pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);

}
