#include "main.h"
/**
 * _puts - this function print strint following by new line
 * @str: input
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
