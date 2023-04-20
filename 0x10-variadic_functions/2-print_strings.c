#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings separated by separator
 * @separator: separates two strings
 * @n: number of strings passed to the function
 * @...: Variable number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;
	char *string;
	unsigned int k;

	va_start(words, n);
	for (k = 0; k < n; k++)
	{
		string = va_arg(words, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(words);

}

