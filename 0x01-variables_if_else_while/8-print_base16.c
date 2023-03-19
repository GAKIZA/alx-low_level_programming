#include <stdio.h>
/**
 * main - Printing _Base 16
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char a;
int d;

a = 'a';
d = 0;
while
	(d < 10) {
		putchar(d + '0');
		d++;
	}
while
	(a <= 'f') {
		putchar(a);
		a++;
}
putchar('\n');
return (0);
}
