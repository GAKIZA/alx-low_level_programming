#include "main.h"
/**
 * _strcmp - Compares two strings
 *@s1: A pointer to the first string to compare
 *@s2: A pointer to the second string to compare to s1
 *
 *Return: If str1 < str2, the negative difference of the first unmached har
 *	If str1 == str2, 0
 *	If str1 > str2, the positive difference of the first unmatched char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
return (*s1 - *s2);
}

