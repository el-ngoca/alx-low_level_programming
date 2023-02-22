#include "main.h"
/**
 * printer_label - This project is to write alphabet
 */
void print_alphabet(void)
{
	char letter;
	for(letter = a;letter < 'z';letter ++)
		_putchar(letter);
	_putchar("/n");
}
