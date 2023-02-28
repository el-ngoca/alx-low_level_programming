#include "main.h"
/**
 * puts2 - this will print every character of a string
 * @str: input
 */
void puts2(char *str)
{
	int o;
	int t = 0;
	int l = 0;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		l++;
	}
	t = l - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar (str[o]);
		}
	}
	_putchar ('\n');
}
