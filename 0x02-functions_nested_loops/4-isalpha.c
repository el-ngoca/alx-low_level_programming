#include "main.h"
/**
 * _isalpha - this will checkfor alphabetic character
 *@c: this is the int
 *Return: (1), otherwise (0)
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

