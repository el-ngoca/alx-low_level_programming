#include "main.h"
/**
 * _islower - This will check for lowercase character
 *@c:is the character to be searched
 *Return: (1) (case true), otherwise (0)
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
