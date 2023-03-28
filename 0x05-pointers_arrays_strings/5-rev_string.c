#include "main.h"

/**
 *rev_string - Reverse a given string
 *@s: a string to reverse
 *Return: empty
 */
void rev_string(char *s)
{
	int i = 0, a = 0;
	char to_reverse;

	while (s[i++])
	{
		a++;
	}

	for (i = a - 1; i >= a / 2; i--)
	{
		to_reverse = s[i];
		s[i] = s[a - i - 1];
		s[a - i - 1] = to_reverse;
	}
}

