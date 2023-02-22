#include "main.h"
/**
 * print_sign - this will print a sign of a number
 * @n: represent the number
 * Return: (1) if positive,(0) if is zero, otherwise (-1)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ("+");
		return (1);
	}
	else if (n == 0)
	{
		_putchar (48;)
		return (0);
	}
	else
	{
		_putchar ("-");
		return (-1);
	}
}
