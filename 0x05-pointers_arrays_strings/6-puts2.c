#include "main.h"
/**
 * puts2 - this will print every character of a string
 * @str: input
 */
void puts2(char *str)
{
	int i =0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i+=1;
	}
	_putchar('\n');
}
