#include <stdio.h>
/**
 * main - Printing _alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char c;
c = 'a';

while
	(c <= 'z') {
		if ((c != 'e' || c != 'q') && c <= 'z')
			continue;
		else
			putchar(c);
		c++;
	}
putchar('\n');
return (0);
}
