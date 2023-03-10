#include "main.h"
/**
 * _puts_recursion - this will print the string
 * @s: thw atring to be printed
 * Return: always (0) success
 */
void _puts_recursion(char *s)
{
	if(*s)
	{
		_puts_recursion(s);
		_putchar(*s);
	}
	else
	{
	_putchar('\n');
	}
}
