#include "main.h"
/**
 * print_rev - thia function prints the string in reverse
 * @s: input
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s--);
		s--;
	}
	_putchar('\n');
}
