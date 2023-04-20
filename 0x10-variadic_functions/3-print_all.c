#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 * @...: argumemts passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list data;

	int a = 0;
	char *string, *separator = "";

	va_start(data, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", separator, va_arg(data, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(data, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(data, double));
					break;
				case 's':
					string = va_arg(data, char *);

					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					a++;
					continue;
			}
			separator = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(data);
}

