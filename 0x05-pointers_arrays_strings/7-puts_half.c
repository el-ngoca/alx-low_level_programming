#include "main.h"
/**
 * puts_half - this will print half off string
 * @str: input
 */
void puts_half(char *str)
{
	int o, n, l;
	l = 0;

	for ( o = 0; str[o] != '\0'; o++)
	{
		l++;
	}
	n = (l / 2);
	if ((l % 2) == 1)
		n = ((l+1) / 2);
	for (o = n; str[o] != '\0'; o++)
		_putchar(str[o]);
	_putchar('\n');
}
