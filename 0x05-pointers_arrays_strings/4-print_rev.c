#include "main.h"
/**
 * print_rev - thia function prints the string in reverse
 * @s: input
 */
void print_rev(char *s)
{
	int len = 0;
	int c;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (c = len; c > 0; c--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
